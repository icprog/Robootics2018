void LCD(){
	int AutoSelect = 0;
	if(SensorValue[LCDInput] > 2600){
		//Calling Auto Selestion
		if(AutoSelect == -1){
			displayLCDCenteredString(0,"Left Mobile Goal");
		}
		else if(AutoSelect == 0){
			displayLCDCenteredString(0,"Stationary goal");
		}
		else if(AutoSelect == 1){
			displayLCDCenteredString(0,"Right Mobile Goal");
		}
		else{
				displayLCDCenteredString(0,"No Auto Seleted");
		}
		// Changing Auto program
		if(nLCDButtons == 1)
			AutoSelect--;
		else if(nLCDButtons == 4)
			AutoSelect++;
	}
	else if(SensorValue[LCDInput] < 2600 && SensorValue[LCDInput] > 1260){
		displayLCDCenteredString(0,"Tobor the Great");
		clearLCDLine(1);

		if(nLCDButtons == 1){
			resetMotorEncoder(ArmL);
			resetMotorEncoder(ArmR);

			displayLCDCenteredString(1,"Arm Reset");
			delay(1500);
		}
	}
	else if(SensorValue[LCDInput] < 1260){
		displayLCDCenteredString(0,"Debugger");
		displayLCDNumber(1,1,nImmediateBatteryLevel/1000.0,'V');
	}
}
