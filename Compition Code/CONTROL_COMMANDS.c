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

	if(Stage1AvgPosition<-150 && Stage1AvgPosition>-400)
	{
		Stage1LeftSpeed = -15;
		Stage1RightSpeed = -15;
	}
	else if(Stage1AvgPosition<-400 && Stage1AvgPosition>-1500)
	{
		Stage1LeftSpeed = -25;
		Stage1RightSpeed = -25;
	}
	else if(Stage1AvgPosition>150 && Stage1AvgPosition<400)
	{
		Stage1LeftSpeed = 15;
		Stage1RightSpeed = 15;
	}
	else if(Stage1AvgPosition>400 && Stage1AvgPosition<1000)
	{
		Stage1LeftSpeed = 25;
		Stage1RightSpeed = 25;
	}

	if(vexRT[Btn5UXmtr2]==1){
		if(abs(vexRT[Ch3Xmtr2]) > threshold)
		{
			Stage1LeftSpeed = vexRT[Ch3Xmtr2];
			Stage1RightSpeed = vexRT[Ch3Xmtr2];
		}
	}
	else if(abs(vexRT[Ch3Xmtr2]) > threshold)
	{
		Stage1LeftSpeed = (vexRT[Ch3Xmtr2])/2.5;
		Stage1RightSpeed = (vexRT[Ch3Xmtr2])/2.5;
	}

		motor[Stage1Left] = Stage1LeftSpeed;
		motor[Stage1Right] = Stage1RightSpeed;
}
///////////////////////////Stage2 Drive////////////////////////////////////
void Stage2()
{
	if(vexRT[Btn8LXmtr2] == 1)
		Stage2Speed = 100;
	else if(vexRT[Btn8DXmtr2])
		Stage2Speed = -100;
	else
		Stage2Speed = 0;

		motor[Stage2Motor] = Stage2Speed;

}
///////////////////////////Grabber Control////////////////////////////////////
void GrabberControl()
{
	if(vexRT[Btn6DXmtr2] == 1)
		GrabberSpeed = 100;
	else if (vexRT[Btn6UXmtr2] == 1)
		GrabberSpeed = -100;
	else
		GrabberSpeed = 0;

		motor[GrabberMotor] = GrabberSpeed;
}
//////////////////////////Torque Lift/////////////////////////////////
void TorqueLift()
{
	if(vexRT[Btn6U] == 1)
	{
		TorqueLeftSpeed = 100;
		TorqueRightSpeed = 100;
	}
	else if(vexRT[Btn6D] == 1)
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
//////////////////////////Torque Extend/////////////////////////////////
void TorqueExtention()
{
	if(vexRT[Btn5U] == 1)
	{
		TorqueExtendSpeed = 50;
	}
	else if(vexRT[Btn5D] == 1)
	{
		TorqueExtendSpeed = -100;
	}
	else
	{
		TorqueExtendSpeed = 0;
	}

		motor[TorqueExtend] = TorqueExtendSpeed;
}
