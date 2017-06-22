#include <LBattery.h>
#include <LSensorHub.h>
//#include <LLedMatrix.h>
#include <LDateTime.h>
#include <List.h>

int bl;
bool isch;
datetimeInfo t;
int state_now;
List <string> states;
int setstate();


void setup() {
  // put your setup code here, to run once:
  //LedMatrix.check_on_line();
  Serial.open(57200);
}

void loop() {
  // put your main code here, to run repeatedly:
  bl=LBattery.level();
  isch=LBattery.isCharging();
  LDateTime.getTime(&t);
  char str[100];
  sprintf(str, "#%d:%d:%d,%d-%d-%d&", t.hour, t.min, t.sec, t.day, t.mon, t.year);
  
  //LedMatrix.disp_string("ABCD",4,200);
  //LedMatrix.disp_char(' ',500);
  
}

  
}
int setstate(){
  int state;
  long data1 = 0;
  long data2 = 0;
  long data3 = 0;

  LSensorHub.GetAccData(&data1, &data2, &data3);

  if (data1>700){
    state=1;
  }
  if (data1<-700){
    state=2;
  } 
  if (data2>700){
    state=3;
  } 
  if (data2<-700){
    state=4;
  }
  if (data3>700){
    state=5;
  }
  if (data3<-700){
    state=6;
  }
   
}

