<!-- Please do not change this html logo with link -->
<a href="https://www.microchip.com" rel="nofollow"><img src="images/microchip.png" alt="MCHP" width="300"/></a>

# Getting Started with the tinyAVR® 1-series

This repository contains training examples on the Microchip tinyAVR® 1-series. Follow the training manual [Training Manual - Getting Started with the tinyAVR® 1-series](https://www.microchip.com/DS40001949) from Microchip for full step-by-step description. The training is carried out on a ATtiny817 Xplained Pro board.

This training includes three assignments covering topics such as: 
- Driver Configuration in [Atmel START](https://start.atmel.com/#)
- PINMUX driver configuration and check LED toggle on button press
- Generate a PWM by using timer counter A (TCA) and implement Variable-Pulse-Width by using the RTC interrupt
- Duty cycle and frequency measurement using input capture mode of TCB
- USART configuration
- CCL (Configurable Custom Logic): A programmable logic peripheral, which can be connected to the
device pins, events, or peripherals, which allows the user to eliminate external logic gates for simple glue logic functions. 

The code in this repository is configured for the last assignment. Refer to the [Training Manual - Getting Started with the tinyAVR® 1-series](https://www.microchip.com/DS40001949) for additional information on how to configure from scratch. 

## Related Documentation

- [Training Manual - Getting Started with the tinyAVR® 1-series](https://www.microchip.com/DS40001949)
- [ATtiny817 Device Page](https://www.microchip.com/wwwproducts/en/ATtiny817)

## Software Used

- [Atmel Studio](https://www.microchip.com/mplab/avr-support/atmel-studio-7) 7.0.2397 or later
- [ATtiny DFP](http://packs.download.atmel.com/) 1.6.316 or later
- AVR/GNU C Compiler (Built-in Compiler) 5.4.0 or later

## Hardware Used

- [ATtiny817 Xplained Pro](https://www.microchip.com/DevelopmentTools/ProductDetails/attiny817-xpro)
- Micro-USB cable (Type-A/Micro-B)
- One female-to-female wire
- Internet connection 


## Operation

1. Connect the ATtiny817 Xplained Pro board to the PC using the USB cable.

2. Download the zip file or clone the example to get the source code.

3. Open the .atsln file in Atmel Studio.

4. Refer to the [Training Manual - Getting Started with the tinyAVR® 1-series](https://www.microchip.com/DS40001949) for step-by-step description on how to program each of the assignments.

4. Build the solution and program the ATtiny817. 

## Conclusion
 This training exercise demonstrated the different peripherals of tinyAVR 1-series, how to use the Event System to generate Event and how to use CCL to generate output.
