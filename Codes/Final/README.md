# This is the Final Code

(To be implemented after checking all equipments)

After feeding the code to Arduino using the IDE, 

**Connections:** 🔌
- Arduino to the 9V Battery using connector
- Buzzer positive to pin 8 on board 
- Buzzer negative to GND on board _(via breadboard)_
- VCC of moisture sensor to 5V on board _(via breadboard)_
- GND of moisture sensor to GND on board _(via breadboard)_
- A0 of moisture sensor to A0 on board 
- Pump negative to Collector of Transistor
- Transistor base to Pin 3 on board
- Emitter pin to GND on board
- Pump positive to Battery Positive
- Battery Negative to GND on board _(via breadboard)_
- VCC of water level sensor to 5V on board _(via breadboard)_
- GND of water level sensor to GND on board _(via breadboard)_
- SIG of water level sensor to A5 on board
- Pipe with Pump leading to the Plant

## **The Setup:** 🏵️

![Plantector](https://user-images.githubusercontent.com/69965983/132102908-b025db9e-a96b-4f9b-9d4f-58fae1d80d05.jpeg)
![Plantector (2)](https://user-images.githubusercontent.com/69965983/132102912-3c8c0bc3-e21d-4481-a821-d7504b96290d.jpeg)


## **Expected Output:** 📶

When Water is low:



https://user-images.githubusercontent.com/69965983/132102873-d35aa64a-d971-46fe-9ff5-dee8343dfeb4.mp4

Otherwise, it'll check for moisture and water level every 30mins, and provide the water via drip irrigation due to small apertures in the plastic pipe.

The pipe is fixed at a place using cello-tape to prevent spillage.

Source code for [Hedwig's Theme](https://github.com/robsoncouto/arduino-songs/blob/master/harrypotter/harrypotter.ino)


https://user-images.githubusercontent.com/69965983/132103132-2402e9f4-5848-4899-bf6f-8364d5bbdbb8.mp4


```Note: If small holes are made to provide drip irrigation, it'll lead to better results```
