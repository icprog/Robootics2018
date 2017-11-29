
int X1=0,X2=0, Y1=0,Y2=0, threshold=15;


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
		Y2 = vexRT[Ch1Xmtr2];
	else
		Y2 = 0;

		motor[Stage1Right] = Y2;
		motor[Stage1Left] = Y2;
}
///////////////////////////Stsge3 Drive////////////////////////////////////
void Stage2()
{
	if(abs(vexRT[Ch3Xmtr2]) > threshold)
		Y2 = vexRT[Ch3Xmtr2];
	else
		Y2 = 0;

		motor[Stage2Motor] = Y2;
}
///////////////////////////Hand Drive////////////////////////////////////
void HandControl()
{
	if(vexRT[Btn7DXmtr2] == 1)
		Y2 = 50;
	else if (vexRT[Btn7UXmtr2] == 1)
		Y2 = -50;
	else
		Y2 = 0;

		motor[Hand] = Y2;
}
//////////////////////////Torque Lift/////////////////////////////////
void TorqueLift()
{
	if(vexRT[Btn8D] == 1)
		Y2 = 100;
	else if (vexRT[Btn8U] == 1)
		Y2 = -100;
	else
		Y2 = 0;

		motor[TorqueLeft] = Y2;
		motor[TorqueRight] = Y2;
}
