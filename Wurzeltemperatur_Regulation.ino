#include <OneWire.h>
#include <DallasTemperature.h>
const int oneWireBus = 2;
OneWire oneWire(oneWireBus);
DallasTemperature sensors(&oneWire);
float tempSensor1, tempSensor2, tempSensor3;

void setup() {
  const int relaisIN1 = 22;
  const int relaisIN2 = 23;
  const int relaisIN3 = 24;
  const int relaisIN4 = 25;
  const int relaisIN5 = 26;
  const int relaisIN6 = 27;
  const int relaisIN7 = 28;
  const int relaisIN8 = 29;
  const int relaisIN9 = 30;
  const int relaisIN10 = 31;
  const int relaisIN11 = 32;
  const int relaisIN12 = 33;
  const int relaisIN13 = 34;
  const int relaisIN14 = 35;
  const int relaisIN15 = 36;
  const int relaisIN16 = 37;
  const int relaisIN17 = 38;
  const int relaisIN18 = 39;
  const int relaisIN19 = 40;
  const int relaisIN20 = 41;
  const int relaisIN21 = 42;
  const int relaisIN22 = 43;
  const int relaisIN23 = 44;
  const int relaisIN24 = 45;
  const int relaisIN25 = 46;
  const int relaisIN26 = 47;
  const int relaisIN27 = 48;
  pinMode(relaisIN1, OUTPUT);
  pinMode(relaisIN2, OUTPUT);
  pinMode(relaisIN3, OUTPUT);
  pinMode(relaisIN4, OUTPUT);
  pinMode(relaisIN5, OUTPUT);
  pinMode(relaisIN6, OUTPUT);
  pinMode(relaisIN7, OUTPUT);
  pinMode(relaisIN8, OUTPUT);
  pinMode(relaisIN9, OUTPUT);
  pinMode(relaisIN10, OUTPUT);
  pinMode(relaisIN11, OUTPUT);
  pinMode(relaisIN12, OUTPUT);
  pinMode(relaisIN13, OUTPUT);
  pinMode(relaisIN14, OUTPUT);
  pinMode(relaisIN15, OUTPUT);
  pinMode(relaisIN16, OUTPUT);
  pinMode(relaisIN17, OUTPUT);
  pinMode(relaisIN18, OUTPUT);
  pinMode(relaisIN19, OUTPUT);
  pinMode(relaisIN20, OUTPUT);
  pinMode(relaisIN21, OUTPUT);
  pinMode(relaisIN22, OUTPUT);
  pinMode(relaisIN23, OUTPUT);
  pinMode(relaisIN24, OUTPUT);
  pinMode(relaisIN25, OUTPUT);
  pinMode(relaisIN26, OUTPUT);
  pinMode(relaisIN27, OUTPUT);
  digitalWrite(relaisIN1, LOW); 
  digitalWrite(relaisIN2, LOW); 
  digitalWrite(relaisIN3, LOW); 
  digitalWrite(relaisIN4, LOW); 
  digitalWrite(relaisIN5, LOW); 
  digitalWrite(relaisIN6, LOW); 
  digitalWrite(relaisIN7, LOW); 
  digitalWrite(relaisIN8, LOW); 
  digitalWrite(relaisIN9, LOW); 
  digitalWrite(relaisIN10, LOW); 
  digitalWrite(relaisIN11, LOW); 
  digitalWrite(relaisIN12, LOW); 
  digitalWrite(relaisIN13, LOW); 
  digitalWrite(relaisIN14, LOW); 
  digitalWrite(relaisIN15, LOW); 
  digitalWrite(relaisIN16, LOW); 
  digitalWrite(relaisIN17, LOW); 
  digitalWrite(relaisIN18, LOW); 
  digitalWrite(relaisIN19, LOW); 
  digitalWrite(relaisIN20, LOW); 
  digitalWrite(relaisIN21, LOW); 
  digitalWrite(relaisIN22, LOW); 
  digitalWrite(relaisIN23, LOW); 
  digitalWrite(relaisIN24, LOW); 
  digitalWrite(relaisIN25, LOW); 
  digitalWrite(relaisIN26, LOW); 
  digitalWrite(relaisIN27, LOW); 
  sensors.begin();
  
}

void loop() {
  const int relaisIN1 = 22;
  const int relaisIN2 = 23;
  const int relaisIN3 = 24;
  const int relaisIN4 = 25;
  const int relaisIN5 = 26;
  const int relaisIN6 = 27;
  const int relaisIN7 = 28;
  const int relaisIN8 = 29;
  const int relaisIN9 = 30;
  const int relaisIN10 = 31;
  const int relaisIN11 = 32;
  const int relaisIN12 = 33;
  const int relaisIN13 = 34;
  const int relaisIN14 = 35;
  const int relaisIN15 = 36;
  const int relaisIN16 = 37;
  const int relaisIN17 = 38;
  const int relaisIN18 = 39;
  const int relaisIN19 = 40;
  const int relaisIN20 = 41;
  const int relaisIN21 = 42;
  const int relaisIN22 = 43;
  const int relaisIN23 = 44;
  const int relaisIN24 = 45;
  const int relaisIN25 = 46;
  const int relaisIN26 = 47;
  const int relaisIN27 = 48;
  pinMode(relaisIN1, OUTPUT);
  pinMode(relaisIN2, OUTPUT);
  pinMode(relaisIN3, OUTPUT);
  pinMode(relaisIN4, OUTPUT);
  pinMode(relaisIN5, OUTPUT);
  pinMode(relaisIN6, OUTPUT);
  pinMode(relaisIN7, OUTPUT);
  pinMode(relaisIN8, OUTPUT);
  pinMode(relaisIN9, OUTPUT);
  pinMode(relaisIN10, OUTPUT);
  pinMode(relaisIN11, OUTPUT);
  pinMode(relaisIN12, OUTPUT);
  pinMode(relaisIN13, OUTPUT);
  pinMode(relaisIN14, OUTPUT);
  pinMode(relaisIN15, OUTPUT);
  pinMode(relaisIN16, OUTPUT);
  pinMode(relaisIN17, OUTPUT);
  pinMode(relaisIN18, OUTPUT);
  pinMode(relaisIN19, OUTPUT);
  pinMode(relaisIN20, OUTPUT);
  pinMode(relaisIN21, OUTPUT);
  pinMode(relaisIN22, OUTPUT);
  pinMode(relaisIN23, OUTPUT);
  pinMode(relaisIN24, OUTPUT);
  pinMode(relaisIN25, OUTPUT);
  pinMode(relaisIN26, OUTPUT);
  pinMode(relaisIN27, OUTPUT);
  sensors.requestTemperatures();
  tempSensor1 = sensors.getTempCByIndex(0);
  tempSensor2 = sensors.getTempCByIndex(1);
  tempSensor3 = sensors.getTempCByIndex(2);
  int temp1 = 25;
  int temp2 = 30;
  int temp3 = 35;
  int tempC1 = tempSensor1;
  int tempC2 = tempSensor2;
  int tempC3 = tempSensor3;
  
  if (tempC1 <= temp1)
    digitalWrite(relaisIN1, HIGH); 
    digitalWrite(relaisIN2, HIGH); 
    digitalWrite(relaisIN3, HIGH); 
    digitalWrite(relaisIN4, HIGH); 
    digitalWrite(relaisIN5, HIGH); 
    digitalWrite(relaisIN6, HIGH); 
    digitalWrite(relaisIN7, HIGH); 
    digitalWrite(relaisIN8, HIGH); 
    digitalWrite(relaisIN9, HIGH);
  if (tempC1 >= temp1)
    digitalWrite(relaisIN1, LOW); 
    digitalWrite(relaisIN2, LOW); 
    digitalWrite(relaisIN3, LOW); 
    digitalWrite(relaisIN4, LOW); 
    digitalWrite(relaisIN5, LOW); 
    digitalWrite(relaisIN6, LOW); 
    digitalWrite(relaisIN7, LOW); 
    digitalWrite(relaisIN8, LOW); 
    digitalWrite(relaisIN9, LOW);
  if (tempC2 <= temp2)
    digitalWrite(relaisIN10, HIGH); 
    digitalWrite(relaisIN11, HIGH); 
    digitalWrite(relaisIN12, HIGH); 
    digitalWrite(relaisIN13, HIGH); 
    digitalWrite(relaisIN14, HIGH); 
    digitalWrite(relaisIN15, HIGH); 
    digitalWrite(relaisIN16, HIGH); 
    digitalWrite(relaisIN17, HIGH); 
    digitalWrite(relaisIN18, HIGH);
  if (tempC2 >= temp2)
    digitalWrite(relaisIN10, HIGH); 
    digitalWrite(relaisIN11, HIGH); 
    digitalWrite(relaisIN12, HIGH); 
    digitalWrite(relaisIN13, HIGH); 
    digitalWrite(relaisIN14, HIGH); 
    digitalWrite(relaisIN15, HIGH); 
    digitalWrite(relaisIN16, HIGH); 
    digitalWrite(relaisIN17, HIGH); 
    digitalWrite(relaisIN18, HIGH);
  if (tempC3 <= temp3)
    digitalWrite(relaisIN19, HIGH); 
    digitalWrite(relaisIN20, HIGH); 
    digitalWrite(relaisIN21, HIGH); 
    digitalWrite(relaisIN22, HIGH); 
    digitalWrite(relaisIN23, HIGH); 
    digitalWrite(relaisIN24, HIGH); 
    digitalWrite(relaisIN25, HIGH); 
    digitalWrite(relaisIN26, HIGH); 
    digitalWrite(relaisIN27, HIGH);
  if (tempC3 >= temp3)
    digitalWrite(relaisIN19, LOW); 
    digitalWrite(relaisIN20, LOW); 
    digitalWrite(relaisIN21, LOW); 
    digitalWrite(relaisIN22, LOW); 
    digitalWrite(relaisIN23, LOW); 
    digitalWrite(relaisIN24, LOW); 
    digitalWrite(relaisIN25, LOW); 
    digitalWrite(relaisIN26, LOW); 
    digitalWrite(relaisIN27, LOW);
  delay(1000);
}