# Plantector 🌱

## What is Plantector?
It is a solution for protecting plants from dying due to over-flooding or drying up. 

## Inspiration

I was entering adulthood, so thought of growing a few plants. In turn, I got a small dog-flower plant. 🌸
<p align="center">
<img src="https://user-images.githubusercontent.com/69965983/132068900-3d80042c-17e9-455b-8e73-0221a1fcdbda.jpeg" height="300" width="300"/> 
</p>
It lived for a few weeks, but then suddenly one day it started drooping. I thought it was low on water so I watered, but then it died. Later on searching got to know it was due to the excess water. 🥀

Similarly, plants I got earlier also died due to drying up. This made me sad and so I thought of doing something about it, and _**VOILA!**_ 

## The Project : Plantector 🌱

### **Required Items** 🗒️

_(The list is of what I used in building, doesn't stop you from using different variations/brands/models)_

1. Plant(s)
2. [Arduino with cable (Uno Recommended)](https://robu.in/product/arduino-uno-r3/) : This will be the brain of the device, it'll have the code which will enable the other parts to  work as directed.
3. [Jumper Wires](https://robu.in/product/20-cm-40-pin-dupont-male-male-male-female-female-female-cable-combo/) : Connecting wires
4. [Glue Gun (optional)](https://robu.in/product/standard-temperature-corded-150-mm-40-watt-hot-melt-glue-gun-11mm-x150mm/) : Used to connect/seal stuff
5. [Breadboard](https://robu.in/product/transparent-400-points-solderless-breadboard/) : Platform to connect multiple devices to the arduino to avoid over-crowding and to use less redundant pins.
6. [Water Sensor](https://robu.in/product/grove-water-sensor/) : This sensor gives out analog value according to the level of water
7. [Solder Iron (optional)](https://robu.in/product/soldering-iron-kit-3-in-1/) : Used to connect two or more wires permanently 
8. [5V Passive Buzzer](https://robu.in/product/5v-passive-buzzer/) : Used to alert if the level of water goes low.
9. [DC 3-6V Mini Submersible Pump](https://robu.in/product/dc-3-6-v-mini-micro-submersible-water-pump/) : Pumps out the water to the plant according to the need
10. Pipe : Transports water from reservoir to the plant
11. [Moisture Sensor](https://robu.in/product/soil-moisture-meter-soil-humidity-sensor-water-sensor-soil-hygrometer-ardunio/) : This sensor gives out the analog value which tells us the percentage (negative meaning no moisture detected and viceversa)
12. [n-p-n Transistor (BC547B)](https://robu.in/product/bc547-npn-transistor-pack-of-20/) : Here used for switching on/of the Pump
13. [Battery Connectors](https://robu.in/product/9v-battery-snap-connector-dc-jackbattery-connector-cap/) : Connects the batteries to pump and arduino 
14. [9V Batteries](https://robu.in/product/9v-original-hw-high-quality-battery-5pcs/) : Power source
15. Reservoir (Plastic bottle with wide mouth) : Holds water to supply to plant when needed.
 
_All Electronic equipment available at [Robu.in](https://robu.in/)_

_Hardwares like Pipe and Reservoir readily available at local hardware shops_ 


### **Procedure** ▶️

Download the [Arduino IDE](https://www.arduino.cc/en/software/) on your Computer. [Do check your PC's Compatibility]

Once you have gotten all the things, I'd recommend you to test it all before going ahead with all of it.

For testing, go to the [Test Codes](https://github.com/Achyut-Saxena/Plantector/tree/main/Codes/Test%20Codes). All expected output's are given in [Test Codes](https://github.com/Achyut-Saxena/Plantector/tree/main/Codes/Test%20Codes), in case it doesn't match check the connections as well as the equipment.

Once you are sure that everything is working, go ahead with your **VERY FIRST PROTOTYPE!!**

Navigate to [Final](https://github.com/Achyut-Saxena/Plantector/tree/main/Codes/Final). You'll find the final code along with the circuit diagram and the expected result in the README of [Final](https://github.com/Achyut-Saxena/Plantector/tree/main/Codes/Final).

Hope you try it out, and use your skills to solve a very minor problem at many households without purchasing a product and rather making it yourself.

### **Working** 👷

The program is in loop of 30 mins. It means that everything in the code/system will work every 30mins and provide some output. 🔁

When the soil is dry, the moisture sensor will read a negative value which will then indicate the pump to switch on till the moisture level reaches about 30% (_adequate water for my plant, would be different for yours_). Once the pump supplies the water and certain % of water is received it turns off. 

This checking of % of moisture continues every 30 mins.

While suppling water, when the water level in the reservoir reaches below the 3/4ths of the sensor, it'll start playing the Hedwig's Theme (_Harry Potter Theme_), indicating that it's low on water and refill is needed. It'll be on loop until we fill in water to a point where the sensor is submerged.

## Important Notes: ⚠️

- Do study the plant you have before blindly copying the code, ask the florist about the water, sunlight and fertilisesr requirements. Then code accordingly.
- Check for any loose connections or any issue with casings, as it might lead to corrosion and contamination of water in reservoir as well.



