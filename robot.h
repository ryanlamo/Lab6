/*
 * robot.h
 *
 *  Created on: Nov 18, 2013
 *      Author: C14Ryan.Lamo
 */

#ifndef ROBOT_H_
#define ROBOT_H_

void initPWM();

void moveLeftMotorForward();
void moveLeftMotorBackward();

void moveRightMotorForward();
void moveRightMotorBackward();

void moveRobotForward();
void moveRobotBackward();

void moveRobotSmallLeft();
void moveRobotLargeLeft();

void moveRobotSmallRight();
void moveRobotLargeRight();


#endif /* ROBOT_H_ */
