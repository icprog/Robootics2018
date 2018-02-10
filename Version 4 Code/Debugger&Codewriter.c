task AutoBase{
	if(AutoSelect == 0)
		LeftAutoBase();
	else if(AutoSelect == 1)
		RightAutoBase();
	else if(AutoSelect == 2)
		SkillAutoBase();
	else{}
	EndTimeSlice();
}
task AutoArm{
	if(AutoSelect == 0)
		LeftAutoArm();
	else if(AutoSelect == 1)
		RightAutoArm();
	else if(AutoSelect == 2)
		SkillAutoArm();
	else{}
	EndTimeSlice();
}
task AutoClaw{
	if(AutoSelect == 0)
		LeftAutoClaw();
	else if(AutoSelect == 1)
		RightAutoClaw();
	else if(AutoSelect == 2)
		SkillAutoClaw();
	else{}
	EndTimeSlice();
	}
task AutoMobileGoal{
if(AutoSelect == 0)
		LeftAutoMobileGoal();
	else if(AutoSelect == 1)
		RightAutoMobileGoal();
	else if(AutoSelect == 2)
		SkillAutoMobileGoal();
	else{}
	EndTimeSlice();
}

void AutoProgram(){
	startTask( AutoBase );
	startTask( AutoArm );
	startTask( AutoClaw );
	startTask( AutoMobileGoal );




}
