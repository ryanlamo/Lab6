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

void moveRobotLeft();

void moveRobotRight();

void stopRobot();


#endif /* ROBOT_H_ */
