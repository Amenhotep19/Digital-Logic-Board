//Authors: Andrew Johnson, Dakota Cowell
// Include the required Wire library for I2C
#include <Wire.h>

int LED1 = 22;
int LED2 = 23;
int LED3 = 24;
int LED4 = 25;
int LED5 = 26;
int LED6 = 27;
int LED7 = 28;
int LED8 = 29;

int LED9 = 37;
int LED10 = 38;
int LED11 = 39;
int LED12 = 40;
int LED13 = 41;
int LED14 = 42;
int LED15 = 43;
int LED16 = 44;


bool DataTrans1;
bool DataTrans2;
bool DataTrans3;
bool DataTrans4;
bool DataTrans5;
bool DataTrans6;
bool DataTrans7;
bool DataTrans8;
bool DataTrans9;
bool DataTrans10;
bool DataTrans11;
bool DataTrans12;
bool DataTrans13;
bool DataTrans14;
bool DataTrans15;
bool DataTrans16;
bool DataTrans17;
bool DataTrans18;
bool DataTrans19;




bool DataTrans20;
bool DataTrans21;
bool DataTrans22;
bool DataTrans23;
bool DataTrans24;
bool DataTrans25;
bool DataTrans26;
bool DataTrans27;
bool DataTrans28;
bool DataTrans29;
bool DataTrans30;
bool DataTrans31;
bool DataTrans32;
bool DataTrans33;
bool DataTrans34;
bool DataTrans35;
bool DataTrans36;
bool DataTrans37;
int isOn = 0; // Off = 0 On = 1

void setup() {
  //Set up serial output baud number
  Serial.begin(9600);
  // Define the LED pin as Output
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (LED7, OUTPUT);
  pinMode (LED8, OUTPUT);
   pinMode (LED9, OUTPUT);
    pinMode (LED10, OUTPUT);
     pinMode (LED11, OUTPUT);
      pinMode (LED12, OUTPUT);
       pinMode (LED13, OUTPUT);
        pinMode (LED14, OUTPUT);
         pinMode (LED15, OUTPUT);
          pinMode (LED16, OUTPUT);
  // Start the I2C Bus as Slave on address 9
  Wire.begin(9); 
  // Attach a function to trigger when something is received.
  Wire.onReceive(receiveEvent);
  //Attach a function to trigger when something is requested
  Wire.onRequest(requestEvent);
}

void receiveEvent(bool bytes) {
  //Read one value from the I2C
  DataTrans1 = Wire.read();
  DataTrans2 = Wire.read();
  DataTrans3 = Wire.read();
  DataTrans4 = Wire.read();
  DataTrans5 = Wire.read();
  DataTrans6 = Wire.read();
  DataTrans7 = Wire.read();
  DataTrans8 = Wire.read();
  DataTrans9 = Wire.read();
  DataTrans10 = Wire.read();
  DataTrans11= Wire.read();
  DataTrans12 = Wire.read();
  DataTrans13 = Wire.read();
  DataTrans14 = Wire.read();
  DataTrans15 = Wire.read();
  DataTrans16 = Wire.read();
  DataTrans17 = Wire.read();
  DataTrans18 = Wire.read();
  DataTrans19 = Wire.read();
  DataTrans20 = Wire.read();
  DataTrans21 = Wire.read();
  DataTrans22 = Wire.read();
  DataTrans23 = Wire.read();
  DataTrans24 = Wire.read();
  DataTrans25 = Wire.read();
  DataTrans26 = Wire.read();
  DataTrans27 = Wire.read();
  DataTrans28 = Wire.read();
  DataTrans29 = Wire.read();
  DataTrans30 = Wire.read();
  DataTrans31 = Wire.read();
  DataTrans32 = Wire.read();
  DataTrans33 = Wire.read();
  DataTrans34 = Wire.read();
  DataTrans35 = Wire.read();
  DataTrans36 = Wire.read();
  DataTrans37 = Wire.read();
  //Display the value received  
  Serial.println(DataTrans1);
  //If the value received was true turn the led on, otherwise turn it off
 // if(DataTrans1){
   // isOn = 1;
 // }
 // else{
   // isOn = 0;
  //}
}

void requestEvent(){
  //Tell the master whether the led is on or not
  Wire.write(isOn);
}

void loop() {
  //Turn on or off the led based on the master's input
  if(DataTrans1){
    digitalWrite(LED1, HIGH);
  }
  else{
    digitalWrite(LED1, LOW);
  }
if(DataTrans2){
    digitalWrite(LED2, HIGH);
  }
  else{
    digitalWrite(LED2, LOW);
  }

  if(DataTrans3){
    digitalWrite(LED3, HIGH);
  }
  else{
    digitalWrite(LED3, LOW);
  }

  if(DataTrans4){
    digitalWrite(LED4, HIGH);
  }
  else{
    digitalWrite(LED4, LOW);
  }
  
if(DataTrans5){
    digitalWrite(LED5, HIGH);
  }
  else{
    digitalWrite(LED5, LOW);
  }

  if(DataTrans6){
    digitalWrite(LED6, HIGH);
  }
  else{
    digitalWrite(LED6, LOW);
  }

  if(DataTrans7){
    digitalWrite(LED7, HIGH);
  }
  else{
    digitalWrite(LED7, LOW);
  }
  if(DataTrans8){
    digitalWrite(LED8, HIGH);
  }
  else{
    digitalWrite(LED8, LOW);
  }

if(DataTrans9){
    digitalWrite(LED9, HIGH);
  }
  else{
    digitalWrite(LED9, LOW);
  }
  if(DataTrans10){
    digitalWrite(LED10, HIGH);
  }
  else{
    digitalWrite(LED10, LOW);
  }
  if(DataTrans11){
    digitalWrite(LED11, HIGH);
  }
  else{
    digitalWrite(LED11, LOW);
  }
  if(DataTrans12){
    digitalWrite(LED12, HIGH);
  }
  else{
    digitalWrite(LED12, LOW);
  }
  if(DataTrans13){
    digitalWrite(LED13, HIGH);
  }
  else{
    digitalWrite(LED13, LOW);
  }
  if(DataTrans14){
    digitalWrite(LED14, HIGH);
  }
  else{
    digitalWrite(LED14, LOW);
  }
  if(DataTrans15){
    digitalWrite(LED15, HIGH);
  }
  else{
    digitalWrite(LED15, LOW);
  }
  if(DataTrans16){
    digitalWrite(LED16, HIGH);
  }
  else{
    digitalWrite(LED16, LOW);
  }
  






  
}
