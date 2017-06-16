#include <LBattery.h>
#include <LSensorHub.h>
#include <LLedMatrix.h>


int bl;
bool isch;
int state;


void setup() {
  // put your setup code here, to run once:
  LedMatrix.check_on_line();
}

void loop() {
  // put your main code here, to run repeatedly:
  bl=LBattery.level();
  isch=LBattery.isCharging();
  LedMatrix.disp_string("ABCD",4,200);
  LedMatrix.disp_char(' ',500);
  
}

int setstate(){
    long data1 = 0;
    long data2 = 0;
    long data3 = 0;

    LSensorHub.GetAccData(&data1, &data2, &data3);

    
    
  
}

