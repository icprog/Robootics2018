
//////////////////////////Calling Sampling//////////////////////////////
void ReadMotors()
{
	if(vexRT[Btn7DXmtr2] == 1)
	{
		waitUntil(vexRT[Btn7DXmtr2] == 0);
		Autonomus();
	}
}
