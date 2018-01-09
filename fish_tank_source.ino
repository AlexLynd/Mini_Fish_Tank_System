#include <Adafruit_NeoPixel.h>
#include <RTClib.h>
#include <Wire.h>

int btn = 1,pump = 4;

Adafruit_NeoPixel led = Adafruit_NeoPixel(1,3, NEO_GRB + NEO_KHZ800);
RTC_DS1307 RTC;

void setup(){
  pinMode(btn, INPUT);
  pinMode(pump, OUTPUT);
  RTC.begin();
  if(!RTC.isrunning()) {
     RTC.adjust(DateTime(__DATE__, __TIME__));
  }
}

void loop(){
  DateTime Clock;                    
  Clock= RTC.now();
/*  if ((Clock.hour()==17)&& ()); {
    led.setPixelColor(0, 0xFF00FF);
    led.show();    
  }
*/
  digitalWrite(pump, HIGH);
 
}
