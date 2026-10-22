# ECE 528/L - Robotics and Embedded Systems with Lab
**CSU Northridge**

**Department of Electrical and Computer Engineering**

## Reflectance Sensor Lab
The Reflectance Sensor lab interfaces with the following:

* User LEDs of the TI MSP432 LaunchPad
* 8-Channel QTRX Sensor Array - [Product Link](https://www.pololu.com/product/3672)

**Pre-Lab**
1. A single sensor consists of an IR LED and phototransistor pair. There are eight sensors on the array. The operating voltage is 2.9V to 5.5V.

2. CTRL EVEN: P5.3
   CTRL ODD: P9.2
   Both pulled to logic high by default, emitters on

3.
```c
void P5_0_and_P9_7_Init (void)
{ 
  P5->OUT &= ~(0x01);
  P9->OUT &= ~(0x80);
  P5->SEL0 &= ~(0x01);
  P5->SEL1 &= ~(0x01);
  P9->SEL0 &= ~(0x80);
  P9->SEL1 &= ~(0x80);
  P5->DIR |= 0x01;
  P9->DIR |= 0x80;
}
```