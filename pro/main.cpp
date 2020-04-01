#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);

int main()
{
      uLCD.printf("\n107061246\n"); //Default Green on black text
      uLCD.line(20,20,20,40,RED);
      uLCD.line(20,20,40,20,RED);
      uLCD.line(20,40,40,40,RED);
      uLCD.line(40,20,40,40,RED);
      while (1){
    for (int i =0; i < 10 ; i++){
      PWM1.period(0.01);
      PWM1 = 0.1*i;
      wait(100);
    }
    for (int i =10; i > 0 ; i--){
      PWM1.period(0.01);
      PWM1 = 0.1*i;
      wait(100);
    }
      }
}