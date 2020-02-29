#pragma config(Motor,  motor12,          rampMotor, tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor11,          leftLiftMotor, tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor6,          rightMotor,    tmotorVexIQ, PIDControl, reversed, encoder)
#pragma config(Motor,  motor5,          leftMotor,     tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor4,          intake,     tmotorVexIQ, PIDControl, encoder)

//#pragma config(Motor,  motor9,          basketMotor,   tmotorVexIQ, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*------------------------------------------------------------------------------------------------
  This program will use the VEX IQ Wirless Controller to drive your Clawbot. This program uses
  If/Else statements to provide a "threshold" for the transmitter - this allows your robot to
  come to a stop even if the joysticks on the Wireless Controller haven't perfectly returned to
  their zero position.

  Note: You will have to set ROBOTC to enable "Wireless Control" to use the VEX IQ joystick.

                            ROBOT CONFIGURATION: VEX IQ Clawbot
    MOTORS & SENSORS:
    [I/O Port]          [Name]              [Type]                			[Location]
    Port 1        			leftMotor           VEX IQ Motor		      			Left side motor
    Port 6       				rightMotor          VEX IQ Motor		      			Right side motor (reversed)
		Port 10							armMotor						VEX IQ Motor								Arm Up/Down motor
		Port 11							clawMotor						VEX IQ Motor								Claw Open/Close motor
------------------------------------------------------------------------------------------------*/
//#pragma config(Motor,  motor6,          intake,        tmotorVexIQ, PIDControl, encoder)



task main()
{
		//auto-on start - first green cube
//		if (getJoystickValue(BtnFUp) == 1)
		{
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);
				setMotorTarget(leftMotor, 100, 50);
				setMotorTarget(rightMotor, 100, 50);
				waitUntilMotorStop(leftMotor);
				waitUntilMotorStop(rightMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);

				setMotorTarget(leftMotor, 125, 100);
				waitUntilMotorStop(leftMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);

				setMotorTarget(leftMotor, -25, 100);
				setMotorTarget(rightMotor, -25, 100);
				waitUntilMotorStop(leftMotor);
				waitUntilMotorStop(rightMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);

				setMotorTarget(leftMotor, -90, 100);
				waitUntilMotorStop(leftMotor);
				resetMotorEncoder(leftMotor);

				setMotorTarget(leftMotor, 100, 40);
				setMotorTarget(rightMotor, 100, 40);
				waitUntilMotorStop(leftMotor);
				waitUntilMotorStop(rightMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);

				// Go closer to the cube
				setMotorTarget(leftMotor, 40, 50);
				setMotorTarget(rightMotor, 40, 50);
				waitUntilMotorStop(leftMotor);
				waitUntilMotorStop(rightMotor);

				// Lift the cube
				setMotorTarget(leftLiftMotor, -458, 100);
				waitUntilMotorStop(leftLiftMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);
				resetMotorEncoder(leftLiftMotor);

				setMotorTarget(rightMotor, 37, 100);
				waitUntilMotorStop(rightMotor);
				resetMotorEncoder(rightMotor);

				setMotorTarget(leftMotor, 580, 100);
				setMotorTarget(rightMotor, 580, 100);
				waitUntilMotorStop(leftMotor);
				waitUntilMotorStop(rightMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);

				setMotorTarget(leftLiftMotor, 225, 100);
				waitUntilMotorStop(leftLiftMotor);
				resetMotorEncoder(leftLiftMotor);

				setMotorTarget(leftMotor, -820, 100);
				setMotorTarget(rightMotor, -820, 100);
				waitUntilMotorStop(leftMotor);
				waitUntilMotorStop(rightMotor);
				resetMotorEncoder(leftMotor);
				resetMotorEncoder(rightMotor);

				setMotorTarget(leftLiftMotor, 265, 100);
				waitUntilMotorStop(leftLiftMotor);
				resetMotorEncoder(leftLiftMotor);

		}
		//auto-on end - first green cube
} // end of task main ()222222
