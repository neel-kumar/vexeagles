#pragma config(Motor,  motor1,          rampMotor, tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor3,          leftLiftMotor, tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          intake,        tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor7,          rightMotor,    tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor8,          leftMotor,     tmotorVexIQ, PIDControl, encoder)

//#pragma config(Motor,  motor9,          basketMotor,   tmotorVexIQ, PIDControl, encoder)

task main()
{
	sleep(200);

	// Go straight close to cube
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(400);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

  // right nudge
	setMotorSpeed(leftMotor, 50);
	sleep(600);
	setMotorSpeed(leftMotor, 0);

	// Move straight back a bit
	setMotorSpeed(leftMotor, -50);
	setMotorSpeed(rightMotor, -50);
	sleep(200);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Move back to straighten the robot
	setMotorSpeed(leftMotor, -50);
	sleep(400);
	setMotorSpeed(leftMotor, 0);

	// Move forward to position the claw close to the cube
	setMotorSpeed(leftMotor, 50);
	setMotorSpeed(rightMotor, 50);
	sleep(400);
	setMotorSpeed(leftMotor, 0);
	setMotorSpeed(rightMotor, 0);

	// Lift the cube using front lift.
//	setMotorSpeed(leftLiftMotor, -75);
//	sleep(3000);
//	setMotorSpeed(leftLiftMotor, 0);

	resetMotorEncoder(leftLiftMotor);
	setMotorTarget(leftLiftMotor, -500, 100);
	resetMotorEncoder(leftLiftMotor);

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

	// End of program
	// sleep(2000);

}
