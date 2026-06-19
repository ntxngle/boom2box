# boom2box
## What and Why

A driver that adapts LF signals from music to LRAs mounted on headphones to enhance felt bass experience. It does this with a bunch of QoL features like leds, neopixel, switches, audio jack for lantency free experience.

In addition, the LRAs can be mounted to not only headphones: shaking a table or chair can also produce excellent results.

This is to replicate the feeling of having high power speakers which I can neither afford nor run. I always enjoy bass in music, and this project should hopefully replicate this experience at minimal cost (and minimal noise to peers)

## Tuff photos

Since the project isn't tuff I don't have tuff photos. Here are some unrelated photos.
<img width="540" height="828" alt="zine" src="https://github.com/user-attachments/assets/f3b5ef9c-fa7f-4068-9d0e-f56e957b4466" />
<img width="1221" height="1080" alt="image" src="https://github.com/user-attachments/assets/efbe9957-ea02-4ca2-8c3a-b1681119c336" />
<img width="1450" height="1182" alt="image" src="https://github.com/user-attachments/assets/266bcf15-d228-45be-88c4-0dd892033e72" />
<img width="1446" height="1174" alt="image" src="https://github.com/user-attachments/assets/3947af42-64a2-4085-950c-a2b8a018a6e5" />
<img width="723" height="631" alt="image" src="https://github.com/user-attachments/assets/e0be31f9-4a4b-4669-8a21-ea853d82682e" />
<img width="712" height="627" alt="image" src="https://github.com/user-attachments/assets/d77b0d56-c1ea-4805-8470-9a55efb729e8" />
<img width="1491" height="1017" alt="image" src="https://github.com/user-attachments/assets/4682836f-ccd8-4566-ae52-10e5be78a430" />
<img width="1251" height="868" alt="image" src="https://github.com/user-attachments/assets/834a80c6-830f-4cba-8263-9c56d6bd75f5" />
<img width="1257" height="879" alt="image" src="https://github.com/user-attachments/assets/5be70417-4902-43f8-b68d-c0ccfb30effc" />


## How it works
A DSP grabs low end of incoming audio, does some normalization (or not) and sends waveform to LRA driver.

These LRA drivers are the jewel of the project: automatic f_0 tracking, closed loop, etc etc read the zine.

To avoid delay between audio and motion, a headphone jack is included so its really close. Yeah.

## BOM
|name           |quantity|cost |link                                                                        |
|---------------|--------|-----|----------------------------------------------------------------------------|
|PCB            |1       |76.32|gerbers in this repo                                                        |
|LRA VG2230001H |2       |15.66|https://www.digikey.com/en/products/detail/vybronics-inc/VG2230001H/16719289|
|1c LiPo >500mAh|1       |5    |tear one out of genuinely anything                                          |
|Case           |1       |~2   |Simple ahh 3d printed case costs like 10 cents in filament                  |
