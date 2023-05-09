/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

#ifdef ESP32_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 32
  #define LEFT_MOTOR_BACKWARD  27
  #define RIGHT_MOTOR_FORWARD  25
  #define LEFT_MOTOR_FORWARD   12
  #define LEFT_MOTOR_FORWARD_CHANNEL 0
  #define LEFT_MOTOR_BACKWARD_CHANNEL 1
  #define RIGHT_MOTOR_FORWARD_CHANNEL 2
  #define RIGHT_MOTOR_BACKWARD_CHANNEL 3
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
