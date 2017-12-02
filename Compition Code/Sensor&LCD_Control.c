
////////////////////////////Sensor Test//////////////////////////////////////
void Sensor()
{
	LeftMotorEncoder=nMotorEncoder[BaseLeft];
	RightMotorEncoder=nMotorEncoder[BaseRight];
	Stage1LeftPosition=(SensorValue[Stage1LeftEncoder])- LeftCenterValue;
	Stage1RightPosition=(SensorValue[Stage1RightEncoder])- RightCenterValue;
	Stage1AvgPosition = (Stage1LeftPosition + Stage1RightPosition)/2;
	Stage2Position = SensorValue[Stage2DisEncoder];

}
