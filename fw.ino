//complete larp

#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

#define I2S_BCLK      18
#define I2S_LRCK      16
#define I2S_DATA      17
#define HAPTIC_GPIO_1 12
#define HAPTIC_GPIO_2 9

I2SStream i2sOutput;
MultiOutput splitter;
BiquadFilter lowPassFilter;
FilteredStream<int16_t, int16_t> filteredI2S(i2sOutput, lowPassFilter); 

class HapticOutput : public AudioOutput{
public:
    bool begin(AudioInfo info) override { return true; }
    size_t write(const uint8_t* data, size_t bytes) override {
        int16_t* samples = (int16_t*)data;
        size_t count = bytes / 2;
        
        for (size_t i = 0; i < count; i += 2) {
            int16_t currentSample = samples[i]; 
            
            uint16_t magnitude = abs(currentSample);
            
            analogWrite(HAPTIC_GPIO_1, magnitude >> 8);
            analogWrite(HAPTIC_GPIO_2, magnitude >> 8);
        }
        return bytes;
    }
};

HapticOutput hapticStream;
BluetoothA2DPSink a2dp_sink;

void setup(){
    Serial.begin(115200);

    auto i2sConfig = i2sOutput.defaultConfig(TX_MODE);
    i2sConfig.pin_bck = I2S_BCLK;
    i2sConfig.pin_ws = I2S_LRCK;
    i2sConfig.pin_data = I2S_DATA;
    i2sConfig.sample_rate = 44100;
    i2sConfig.bits_per_sample = 16;
    i2sOutput.begin(i2sConfig);

  auto filterConfig = lowPassFilter.defaultConfig();
    filterConfig.cutoff_frequency = 150; 
    filterConfig.sample_rate = 44100;
    lowPassFilter.begin(filterConfig);
    filteredI2S.begin();
    splitter.add(filteredI2S);
    splitter.add(hapticStream);

    a2dp_sink.set_stream(splitter);
    a2dp_sink.start("boom2box");
}

void loop(){
    delay(10); 
}