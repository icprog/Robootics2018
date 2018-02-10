int buttoncycle, GuessValue,LCDInput;
task LCD{
	while(true){
		buttoncycle++;
		if(buttoncycle > 1000){
			buttoncycle = 0;
			clearLCDLine(0);
			clearLCDLine(1);
		}
		if(SensorValue[LCDInput] > 2600){
			//Calling Auto Selestion
			if(GuessValue == 0){
				displayLCDCenteredString(0,"Left Mobile Goal");
			}
			else if(GuessValue == 1){
				displayLCDCenteredString(0,"Right Mobile Goal");
			}
			else if(GuessValue == 2){
				displayLCDCenteredString(0,"Skills Auto");
			}
			else{
				displayLCDCenteredString(0,"No Auto Seleted");
			}

			if(nLCDButtons == 2){
				displayLCDCenteredString(0,"Auto Seleted");
				AutoSelect = GuessValue;
				delay(1000);
			}

			// Changing Auto program
			if(nLCDButtons == 1 && buttoncycle == 0)
				GuessValue--;
			else if(nLCDButtons == 4 && buttoncycle == 0)
				GuessValue++;
		}

		else if(SensorValue[LCDInput] < 2600 && SensorValue[LCDInput] > 1260){
			displayLCDCenteredString(0,"Tobor the Great");
		//	displayLCDNumber(1, 0, time1[T1]);
			clearLCDLine(1);

			if(nLCDButtons == 1){
				resetMotorEncoder(ArmL);
				resetMotorEncoder(ArmR);
				SensorValue[BaseLeftEncoder]=0;
				SensorValue[BaseRightEncoder]=0;

				displayLCDCenteredString(1,"Arm Reset");
				delay(1500);
			}
		}
		else if(SensorValue[LCDInput] < 1260){
			displayLCDNumber(0,0,SensorValue[Gyro]);
		}

		//displayLCDCenteredString(0,"Auto Seleted");
		AutoSelect = GuessValue;
		EndTimeSlice();
	}
}
