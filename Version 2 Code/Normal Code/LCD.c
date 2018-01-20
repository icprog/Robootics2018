void LCD(){
clearLCDLine(0);
clearLCDLine(1);
bLCDBacklight = true;
displayLCDNumber(0,0,nPgmTime );

displayLCDCenteredString(1,"Tobor the Great");

	if(nLCDButtons == 1){
		resetMotorEncoder(leftArmMotor);

	}
}
