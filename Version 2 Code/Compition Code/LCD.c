void LCD(){
	if(nPgmTime < 1000){
		displayLCDCenteredString(0,"Tobor the Great");
	}
	if(SensorValue[LCDInput] > 2600){
		displayLCDCenteredString(0,"Sorry No");
		displayLCDCenteredString(1,"Autonomous");
	}
	else if(SensorValue[LCDInput] < 2600 && SensorValue[LCDInput] > 1260){
		displayLCDCenteredString(0,"Tobor the Great");
		clearLCDLine(1);
	}
	else if(SensorValue[LCDInput] < 1260){
		displayLCDCenteredString(0,"Debugger");
		displayLCDNumber(1,1,nImmediateBatteryLevel/1000.0,'V');
	}

	if(nLCDButtons == 1){
		resetMotorEncoder(leftArmMotor);
		resetMotorEncoder(rightArmMotor);

	}
}
