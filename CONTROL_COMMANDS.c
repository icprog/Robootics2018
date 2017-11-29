////////////////////////////TANK DRIVE/////////////////////////////////////
void TankDrive()
{
	if (abs(vexRT[Ch3]) > threshold)
		Y1 = vexRT[Ch3];
	else
		Y1 = 0;

	if(abs(vexRT[Ch2]) > threshold)
		X1 = vexRT[Ch2];
	else
		X1 = 0;

		motor[BaseLeft] = Y1;
		motor[BaseRight] = X1;
		LeftBaseSpeed = Y1;
		RightBaseSpeed = X2;
}
///////////////////////////Stage1 DRIVE///////////////////////////////////
void Stage1()
{
	if(abs(vexRT[Ch1Xmtr2]) > threshold)
	{
		Stage1LeftSpeed = vexRT[Ch1Xmtr2];
		Stage1RightSpeed = vexRT[Ch1Xmtr2];
	}
	else
	{
		Stage1LeftSpeed = 0;
		Stage1RightSpeed = 0;
	}
		motor[Stage1Left] = Stage1LeftSpeed;
		motor[Stage1Right] = Stage1RightSpeed;
}
///////////////////////////Stage2 Drive////////////////////////////////////
void Stage2()
{
	if(abs(vexRT[Ch3Xmtr2]) > threshold)
		Stage2Speed = vexRT[Ch3Xmtr2];
	else
		Stage2Speed = 0;

		motor[Stage2Motor] = Stage2Speed;
}
///////////////////////////Grabber Control////////////////////////////////////
void GrabberControl()
{
	if(vexRT[Btn7DXmtr2] == 1)
		GrabberSpeed = 50;
	else if (vexRT[Btn7UXmtr2] == 1)
		GrabberSpeed = -50;
	else
		GrabberSpeed = 0;

		motor[GrabberMotor] = GrabberSpeed;
}
//////////////////////////Torque Lift/////////////////////////////////
void TorqueLift()
{
	if(vexRT[Btn8D] == 1)
	{
		TorqueLeftSpeed = 100;
		TorqueRightSpeed = 100;
	}
	else if(vexRT[Btn8U] == 1)
	{
		TorqueLeftSpeed = -100;
		TorqueRightSpeed = -100;
	}
	else
	{
		TorqueLeftSpeed = 0;
		TorqueRightSpeed = 0;
	}

		motor[TorqueLeft] = TorqueLeftSpeed;
		motor[TorqueRight] = TorqueRightSpeed;
}
