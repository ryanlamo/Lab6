/*
 * robot.c
 *
 *  Created on: Nov 18, 2013
 *      Author: C14Ryan.Lamo
 */
#include <msp430.h>
#include "robot.h"

void initPWM()
{
	P2DIR |= BIT4;
	P2SEL |= BIT4;

	P1DIR |= BIT2;
	P1SEL |= BIT2;

	P2DIR |= BIT5;
	P2SEL |= BIT5;

	P2DIR |= BIT1;
	P2SEL |= BIT1;

	TA0CTL &= ~(MC1|MC0);
	TA1CTL &= ~(MC1|MC0);

	TA0CTL |= TACLR;
	TA1CTL |= TACLR;

	TA0CTL |= TASSEL1;
	TA1CTL |= TASSEL1;

	TA0CCR0 = 100;
	TA1CCR0 = 100;
	TA0CCR1 = 0;
	TA1CCR1 = 0;
	TA1CCR2 = 0;

	TA0CCTL1 |= OUTMOD_7;
	TA1CCTL1 |= OUTMOD_7;
	TA1CCTL2 |= OUTMOD_7;

	TA0CTL |= MC0;
	TA1CTL |= MC0;
}

void moveLeftMotorForward()
{
	TA1CCR2 = 0;
	_delay_cycles(10000);
	TA0CCR1 = 50;
}

void moveRightMotorForward()
{
	TA1CCR2 = 0;
	_delay_cycles(10000);
	TA1CCR1 = 50;
}

void stopLeftMotor()
{
	TA1CCR2 = 0;
	_delay_cycles(10000);
	TA0CCR1 = 0;
}

void stopRightMotor()
{
	TA1CCR2 = 0;
	_delay_cycles(10000);
	TA1CCR1 = 0;
}

void stopRobot()
{
	stopLeftMotor();
	stopRightMotor();
}

void moveRobotForward()
{
	moveLeftMotorForward();
	moveRightMotorForward();
}

void moveRobotBackward()
{
	TA0CCR1 = 0;
	TA1CCR1 = 0;
	TA1CCR2 = 50;
}

void moveRobotLeft()
{
	stopLeftMotor();
	moveRightMotorForward();
}

void moveRobotRight()
{
	stopRightMotor();
	moveLeftMotorForward();
}
