/* Author: C1C Ryan Lamo
 * Created: 18 November 2013
 * Last Edited: 18 November 2013
 * Description: This program will move a robot forward, backwards, half left, full left,
 * half right and full right.
 * Documentation:
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
