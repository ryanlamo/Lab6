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
	P1DIR |= BIT1;
	P1SEL |= BIT1;

	P1DIR |= BIT2;
	P1SEL |= BIT2;

	P2DIR |= BIT0;
	P2SEL |= BIT0;

	P2DIR |= BIT1;
	P2SEL |= BIT1;

	TA0CTL &= MC1|MC0;
	TA1CTL &= MC1|MC0;

	TA0CTL |= TACLR;
	TA1CTL |= TACLR;

	TA0CTL |= TASSEL1;
	TA1CTL |= TASSEL1;

	TA0CCR0 = 100;
	TA1CCR0 = 100;
	TA0CCR1 = 0;
	TA1CCR1 = 0;

	TA0CCTL1 |= OUTMOD_7;
	TA1CCTL1 |= OUTMOD_7;

	TA0CTL |= MC0;
	TA1CTL |= MC0;
}

void moveLeftMotorForward()
{
	TA0CCR1 = 50;
//	TA0CCR0 = 0;
}

void moveLeftMotorBackward()
{
//	TA0CCR1 = 0;
	TA0CCR0 = 50;
}

void moveRightMotorForward()
{
	TA1CCR1 = 50;
//	TA1CCR0 = 0;
}

void moveRightMotorBackward()
{
//	TA1CCR1 = 0;
	TA1CCR0 = 50;
}

void moveRobotForward()
{
	moveLeftMotorForward();
	moveRightMotorForward();
}

void moveRobotBackward()
{
	moveLeftMotorBackward();
	moveRightMotorBackward();
}


void moveRobotLeft()
{
	moveLeftMotorBackward();
//	moveRightMotorForward();
}


void moveRobotRight()
{
	moveLeftMotorForward();
//	moveRightMotorBackward();
}


