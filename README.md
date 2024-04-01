# 4100901-tesla-turn-hazard-signal
This repository contains an approach to implement the tesla turn and hazard signals

This repository contains the project for the operation of lights similar to the directional lights of a Tesla car, this project is implemented with a STM32 microcontroller.

##System Requirements

### Non-functional Requirements:

*  The system must have 3 buttons: Left Turn, Right Turn, Park.
*  The system must have 3 LEDs: System Heartbeat, Left Light, Right Light.
*  The system must have a debug port with the PC: USART2.

### Functional Requirements:

System heartbeat must occur at a frequency of 1Hz to indicate system operation.
*  If a turn button is pressed once, the corresponding side light must flash 3 times.
*  If a turn button is pressed twice within 300ms, the corresponding side light must flash indefinitely.
*  If a turn button is pressed and the light on the other side is active, the active light must be deactivated.
*  Pressing the park signal button must function like a real car, e.g., Tesla.
*  The frequency of light flashing must comply with "The General Circulation Regulations."
*  The main system events must be identifiable through a PC serial console.
*  
This repository contains the code and documentation necessary to implement the described system requirements.
