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
<img width="1251" height="868" alt="image" src="https://github.com/user-attachments/assets/834a80c6-830f-4cba-8263-9c56d6bd75f5" />
<img width="1257" height="879" alt="image" src="https://github.com/user-attachments/assets/5be70417-4902-43f8-b68d-c0ccfb30effc" />


## Howtf
A DSP grabs low end of incoming audio, does some normalization (or not) and sends waveform to LRA driver.

These LRA drivers are the jewel of the project: automatic f_0 tracking, closed loop, etc etc read the zine.

To avoid delay between audio and motion, a headphone jack is included so its really close. Yeah.
