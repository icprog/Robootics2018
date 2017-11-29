//////////////////////////Creating Autonomus////////////////////////
void Autonomus()
{
		BaseLeftArray[cycle] = LeftBaseSpeed;
		BaseRightArray[cycle] = RightBaseSpeed;
		Stage1LeftArray[cycle] = Stage1LeftSpeed;
		Stage1RightArray[cycle] = Stage1RightSpeed;
		Stage2Array[cycle] = Stage2Speed;
		GrabberArray[cycle] = GrabberSpeed;
		TorqueLeftArray[cycle] = TorqueLeftSpeed;
		TorqueRightArray[cycle] = TorqueRightSpeed;
		cycle++;

}
//////////////////////////Calling Sampling//////////////////////////////
void ReadMotors()
{
	if(vexRT[Btn7DXmtr2] == 1)
	{
		waitUntil(vexRT[Btn7DXmtr2] == 0);
		Autonomus();
	}
}
