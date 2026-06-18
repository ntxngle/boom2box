# boom2box
## Whattf
This project is a small gadget that drives two LRAs according to music input via bluetooth. Said LRAs are mountable anywhere:
- Headphones
- Table
- Leg
- Wall
- Cat

This is to replicate the feeling of having high power speakers which I can neither afford nor run.

## Tuff photos

Since the project isn't tuff I don't have tuff photos. Here are some unrelated photos.
<img width="1450" height="1182" alt="image" src="https://github.com/user-attachments/assets/266bcf15-d228-45be-88c4-0dd892033e72" />
<img width="1446" height="1174" alt="image" src="https://github.com/user-attachments/assets/3947af42-64a2-4085-950c-a2b8a018a6e5" />
<img width="723" height="631" alt="image" src="https://github.com/user-attachments/assets/e0be31f9-4a4b-4669-8a21-ea853d82682e" />
<img width="712" height="627" alt="image" src="https://github.com/user-attachments/assets/d77b0d56-c1ea-4805-8470-9a55efb729e8" />
<img width="1491" height="1017" alt="image" src="https://github.com/user-attachments/assets/4682836f-ccd8-4566-ae52-10e5be78a430" />
<img width="1251" height="868" alt="image" src="https://github.com/user-attachments/assets/834a80c6-830f-4cba-8263-9c56d6bd75f5" />
<img width="1257" height="879" alt="image" src="https://github.com/user-attachments/assets/5be70417-4902-43f8-b68d-c0ccfb30effc" />


## Howtf
A DSP grabs low end of incoming audio, does some normalization (or not) and sends waveform to LRA driver.

These LRA drivers are the jewel of the project: automatic f_0 tracking, closed loop, etc etc read the zine.

To avoid delay between audio and motion, a headphone jack is included so its really close. Yeah.
