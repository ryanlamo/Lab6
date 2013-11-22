# Lab 6
Code to create basic movement with a robot. 

## Notes about Lab 
Requires connecting the correct pins on the MSP 430 to the motor control pins to follow the below layout
 - Pin 1.2 connected to L blk 
 - Pin 2.1 connected to R red
 - Pin 2.4 connected to R blk 
 - Pin 2.5 connected to L red 


## Functions 

- 'initPWM()'
  - Initializes the MSP 430 to use PWM to power the DC motors. 
  - Pin1.2 used to access TA0.1
  - Pin2.1 used to access TA1.1
  - Pin2.4 used to access TA1.2
  - Pin2.5 used to access TA1.2

  - TA0.1 and TA1.1 are both used for forward motion of the robot (TA0.1 controls left, TA1.1 controls Right).
  - TA1.2 is used to control the reverse motion of the robot. 
  
- behind the scene code used by program are below 
  - 'moveLeftMotorForward()' 
  - 'moveRightMotorForward()'
  - 'stopLeftMotor()'
  - stopRightMotor()'

- code utilized by the user are below
  - 'stopRobot()' utilizes 'stopLeftMotor()' and 'stopRightMotor()'
  - 'moveRobotForward()' utilizes 'moveLeftMotorForward()' and 'moveRightMotorForward()'
  - 'moveRobotBackward()' does not utilize any other code
  - 'moveRobotLeft()' utilizes 'stopLeftMotor()' and 'moveRightMotorForward()'
  - 'moveRobotRight()' utilizes 'stopRightMotor()' and 'moveLeftMotorForward()'
  

  


