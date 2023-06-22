#include "main.h"

int WheelDia = 0;
int MotorType = 0;
//100 rpm = 1800
//200 rpm = 900
//300 rpm = 300
int DRCP
//Diameter of Robot Contact Points = What is the diameter of the circle the wheels fall on

void WaitTillStop() {
  int Velocity;
  pros::delay(150);
  master.print(2, 0, "PlaceHolder: %i", 1);
  Velocity = Motor.get_actual_velocity();
  while(abs(Velocity) > 1){
    pros::delay(10);
    Velocity = Motor.get_actual_velocity();
  }
}

void Drive (float dist){
  Motor1.move_relative((dist/(M_PI*WheelDia))*MotorType, 200);
  Motor2.move_relative((dist/(M_PI*WheelDia))*MotorType, 200);
  Motor3.move_relative((dist/(M_PI*WheelDia))*MotorType, 200);
  Motor4.move_relative((dist/(M_PI*WheelDia))*MotorType, 200);
}

void Turn (int Direction float Degrees){
  //1 for direction is CW
  //-1 for direction is CCW
  Motor1.move_relative((Direction*((Degrees*((DRCP*M_PI)/360))/(M_PI*WheelDia))*MotorType), 200);
  Motor2.move_relative((Direction*((Degrees*((DRCP*M_PI)/360))/(M_PI*WheelDia))*MotorType), 200);
  Motor3.move_relative((-Direction*((Degrees*((DRCP*M_PI)/360))/(M_PI*WheelDia))*MotorType), 200);
  Motor4.move_relative((-Direction*((Degrees*((DRCP*M_PI)/360))/(M_PI*WheelDia))*MotorType), 200);
}


//code for turning is an arc

void Arc (int){

}

void MoveArm (int Degrees){
    Motor1.move_relative(Degrees*(MotorType/360), 200)
    Motor2.move_relative(Degrees*(MotorType/360), 200)
}
//activate cylinder
//
