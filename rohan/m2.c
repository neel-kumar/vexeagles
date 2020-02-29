#pragma config(Motor,  motor1,          rampMotor, tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor2,          leftLiftMotor, tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          intake,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor7,          rightMotor,    tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor8,          leftMotor,     tmotorVexIQ, PIDControl, encoder)

task main()
{
	sleep(200);

	// Right turn to position the robot to face the middle cube
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, -50);
	sleep(600);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Move forward to position the claw close to the cube
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(1500);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Slight left turn
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 100);
	sleep(200);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	/*

  // nudge
	setMotorSpeed(leftMotor, 100);
	sleep(550);
	setMotorSpeed(leftMotor, 0);

	// Move back to straighten the robot
	setMotorSpeed(leftMotor, -100);
	sleep(350);
	setMotorSpeed(leftMotor, 0);

	// Move forward to position the claw close to the cube
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(600);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Lift the cube using front lift.
	setMotorSpeed(leftLiftMotor, -100);
	sleep(1300);
	setMotorSpeed(leftLiftMotor, 0);

	// Move forward closer to the first tower
	setMotorSpeed(leftMotor, 100);
	setMotorSpeed(rightMotor, 100);
	sleep(1000);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Move back to face the first tower
	setMotorSpeed(leftMotor, -100);
	sleep(275);
	setMotorSpeed(leftMotor, 0);

	// Move forward closer to the first tower
	setMotorSpeed(leftMotor, 100);
	setMotorSpeed(rightMotor, 100);
	sleep(750);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Pause to ensure the cube is on the tower
	sleep(500);

	// Move the claw down
	setMotorSpeed(leftLiftMotor, 50);
	sleep(700);
	setMotorSpeed(leftLiftMotor, 0);

	// Pause to ensure the cube is stable
	sleep(500);

	// Move backward now
	setMotorSpeed(leftMotor, -100);
	setMotorSpeed(rightMotor, -100);
	sleep(2000);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);
*/
	// End of program
	sleep(2000);

}
