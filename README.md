# pickpocket-security-system

## Setup

- Clone the github repository first using git:

  ```
  git clone https://github.com/fazle-elahi-tonmoy/pickpocket-security-system.git
  ```


## Problem Statement:
Pickpocketing has been a wide-spread problem throughout the entire world. In Bangladesh there happens at least 9 thefts per 100,000 people which is very agitating <a href = "https://www.theglobaleconomy.com/Bangladesh/theft/"> source here </a>

So, we created a very low-cost security device which will alert the user if someone tries to pick-pocket their wallet or other valuable stuff. 

## Description:
The product consists of a single PCB containing IR reflective sensor, buzzer, and a microcontroller which can trigger if someone pulls the moneybag out of the pocket without consent and create a huge sound indicating theft. 
It can also be attached to smartphone and be put into the pocket because of its slim design. 
<img src="circuit/System View.png" width="500">


## Circuit Diagram:

<img src="circuit/Circuit Diagram.png" width="auto">

## PCB View:
  - Front View:
  <img src="circuit/PCB Front View.png" width="500" >

  - Back View:
  <img src="circuit/PCB Back View.png" width="500" >

## Working Principle:
  In this product there is a single push button for activating the system and setting your password. First, let’s see the way to press this button:
  
  - <img src="img/Short Press.png" width="50" > Short Press (Press and Release Immediately)
  - <img src="img/Long Press.png" width="50" > Long Press (Press and hold for at least 0.5s)

  Now there is three major modes in this device. Each mode has a specific button pressing sequence which are described below:
  <img src="img/Mode Table.png" width="auto" >
  
  ### Password Input: 
  The password consists of two digit which can be understood from the example below. This way we can input a password using only one button.
  
  <img src="img/Password Input.png" width="300" >

## Product Specification:
  - Dimension:  `1inch x 0.8 inch` (Main Circuit) and battery
  - Battery Capacity: 5hr on guard, 72hr on standby (500 mAh)
  - Water Resistance: No water resistance

## Developer Team

  ### Fazle Elahi Tonmoy
  Team Leader, R&D, Production 
    `Bengal Innovators`

  ### Mubarak Hussain
  R&D, Network and Distribution
    `Bengal Innovators`





