/*
 * robot.c
 *
 *  Created on: Nov 18, 2013
 *      Author: C14Ryan.Lamo
 */

void initPWM()
{
	P1DIR |= BIT1;
	P1SEL |= BIT1;

	P1DIR |= BIT2;
	P1SEL |= BIT2;

	P1DIR |= BIT3;
	P1SEL |= BIT3;

	P1DIR |= BIT4;
	P1SEL |= BIT4;

	TACTL &= ~MC1|MC0;

	TACTL |= TACLR;

	TACTL |= TASSEL1;

	TACCR0 = 100;

	TACTL |= MC0;
}

void moveLeftMotorForward()
{
	TA0CCR1 = 50;
	TA0CCR0 = 0;
}

void moveLeftMotorBackward()
{
	TA0CCR1 = 0;
	TA0CCR0 = 50;
}

void moveRightMotorForward()
{
	TA1CCR1 = 50;
	TA1CCR0 = 0;
}

void moveRightMotorBackward()
{
	TA1CCR1 = 0;
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

void moveRobotSmallLeft()
{
	moveLeftMotorBackward();
	moveRightMotorForward();
}

void moveRobotLargeLeft()
{
	moveLeftMotorBackward();
	moveRightMotorForward();
}

void moveRobotSmallRight()
{
	moveLeftMotorForward();
	moveRightMotorBackward();
}

void moveRobotLargeRight()
{
	moveLeftMotorForward();
	moveRightMotorBackward();
}


