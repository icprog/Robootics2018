void DriveChain(){
	if(abs(vexRT[Ch3]) > threshold){
		frontLeftMotorSpeed = vexRT[Ch3];
		backLeftMotorSpeed = vexRT[Ch3];
	}
	else{
		frontLeftMotorSpeed = 0;
		backLeftMotorSpeed = 0;
	}

	if (abs(vexRT[Ch2]) > threshold){
		frontRightMotorSpeed = vexRT[Ch2];
		backRightMotorSpeed = vexRT[Ch2];
	}
	else {
		frontRightMotorSpeed = 0;
		backRightMotorSpeed = 0;
	}
}

void PressureControl(){
	if(vexRT[Btn6U] == 1){
      SensorValue[rightPneumatic] = 1;
      SensorValue[leftPneumatic] = 1;
    }

  else if(vexRT[Btn6D] == 1){
      SensorValue[leftPneumatic] = 0;
      SensorValue[rightPneumatic] = 0;
  	}
}
