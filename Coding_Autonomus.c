signed char BaseLeftArray [175]= {0};
int cycle = 1;
int SelfTime = 0;

void Autonomus()
{
	if(T1 == SelfTime)
	{
		BaseLeftArray[cycle]= LeftBaseSpeed;
		SelfTime = SelfTime +0.1;
		cycle++;
	}
}
