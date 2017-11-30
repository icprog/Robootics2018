
////////////////////////////Sensor Test//////////////////////////////////////
void Sensor()
{
	LeftMotorEncoder=nMotorEncoder[BaseLeft];
	RightMotorEncoder=nMotorEncoder[BaseRight];
	Stage1MotorEncoder=SensorValue[Stage1Encoder];
	if(vexRT[Btn7UXmtr2] == 1)
		SensorValue[Stage1Encoder]=0;

}
