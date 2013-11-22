/* Author: C1C Ryan Lamo
 * Created: 18 November 2013
 * Last Edited: 18 November 2013
 * Description: This program will move a robot forward, backwards, half left, full left,
 * half right and full right.
 * Documentation: After having difficulty getting the backward command to work, I referenced
 * Jason Mossing's code and noticed that he used the same signal to control reverse movement.
 * I implemented similar code to perform this same task. Capt Branchflower also helped to clean up my code
 * to run more efficiently.
 */

#include <msp430.h> 
#include "robot.h"

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer


    initPWM();

    while(1)
    {
    	moveRobotForward();
    	_delay_cycles(1000000);
    	stopRobot();
    	_delay_cycles(1000000);
    	moveRobotBackward();
    	_delay_cycles(1000000);
    	stopRobot();
    	_delay_cycles(1000000);
    	moveRobotLeft();
    	_delay_cycles(500000);
    	stopRobot();
    	_delay_cycles(1000000);
    	moveRobotRight();
    	_delay_cycles(500000);
    	stopRobot();
    	_delay_cycles(1000000);
    	moveRobotLeft();
    	_delay_cycles(1000000);
    	stopRobot();
    	_delay_cycles(1000000);
    	moveRobotRight();
    	_delay_cycles(1000000);
    	stopRobot();
    	_delay_cycles(1000000);

    }
	
	return 0;
}
