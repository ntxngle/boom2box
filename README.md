# boom2box
## What and Why

A driver that adapts LF signals from music to LRAs mounted on headphones to enhance felt bass experience. It does this with a bunch of QoL features like leds, neopixel, switches, audio jack for lantency free experience.

In addition, the LRAs can be mounted to not only headphones: shaking a table or chair can also produce excellent results.

This is to replicate the feeling of having high power speakers which I can neither afford nor run. I always enjoy bass in music, and this project should hopefully replicate this experience at minimal cost (and minimal noise to peers). A few years ago a friend showed me his headphones and I was surprised to feel that they shook like crazy. This same geek blasted shadow money wizard gang at the crisp 6AM on the bus, so I figure he must know his music. Fast forward to a few months ago, I put some terribly old desktop speakers on my desk and spent very valuable time (in lieu of studying for linear: I now have an F) on maximizing bass output. Obviously to my disappointment I didn't feel the chest thumping explosions found only in brazilian car modifier demonstrations, it did vibrate my desk a little in the right conditions. A suprisingingly bass-like experience. Thus, after finishing my other fallout project, I set out to replicate that feeling in the most intense way. While i couldn't mount double digit diameter subwoofers in my obviously homework filled drawers, I figured I could cheat by generating the vibrations directly.

## Tuff photos

Since the project isn't tuff I don't have tuff photos. Here are some unrelated photos.
<img width="1080" height="1656" alt="image" src="https://github.com/user-attachments/assets/8a7979b5-16e1-4e94-ad02-a81f0fb1d0eb" />
<img width="1221" height="1080" alt="image" src="https://github.com/user-attachments/assets/efbe9957-ea02-4ca2-8c3a-b1681119c336" />
<img width="1450" height="1182" alt="image" src="https://github.com/user-attachments/assets/266bcf15-d228-45be-88c4-0dd892033e72" />
<img width="1446" height="1174" alt="image" src="https://github.com/user-attachments/assets/3947af42-64a2-4085-950c-a2b8a018a6e5" />
<img width="723" height="631" alt="image" src="https://github.com/user-attachments/assets/e0be31f9-4a4b-4669-8a21-ea853d82682e" />
<img width="712" height="627" alt="image" src="https://github.com/user-attachments/assets/d77b0d56-c1ea-4805-8470-9a55efb729e8" />
<img width="1491" height="1017" alt="image" src="https://github.com/user-attachments/assets/4682836f-ccd8-4566-ae52-10e5be78a430" />


## How it works
A DSP grabs low end of incoming audio, does some normalization (or not) and sends waveform to LRA driver.

These LRA drivers are the jewel of the project: automatic f_0 tracking, closed loop, etc etc read the zine. They are the ones responsible for driving the huge 15$ 3.5G thumpers that I plan to connect to them: another versatility of this project is that other LRAs work. Anything from 10mm aliexpress buzzers to massive rectangular theater grade shakers (3Vrms, 1/2 amp max) will work identically (other than f0: DSP should be retuned to pitch bass up or down closer to f0 for maximum amplitude.

To avoid delay between audio and motion, a headphone jack is included. This way I can control audio out to motion, to solve potential (and variable) desyncs. It also makes for a great way to turn wired over-ears (the target of this project) into wireless skull shakers.

## BOM
|name           |quantity|cost |link                                                                        |
|---------------|--------|-----|----------------------------------------------------------------------------|
|PCB            |1       |76.32|gerbers in this repo                                                        |
|LRA VG2230001H |2       |15.66|https://www.digikey.com/en/products/detail/vybronics-inc/VG2230001H/16719289|
|1c LiPo >500mAh|1       |5    |tear one out of genuinely anything                                          |
|Case           |1       |~2   |Simple ahh 3d printed case costs like 10 cents in filament                  |
