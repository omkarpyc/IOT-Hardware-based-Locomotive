#include <Motor_RS.h>
#include <HCSR04.h>
#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);

const byte smoke = A3;
const byte LED = 3;


Motor_RS motor(5,4);

// defines pins numbers
const byte triggerPin = 7;
const byte echoPin = 2;
UltraSonicDistanceSensor distanceSensor(triggerPin, echoPin);


void setup() {
 pinMode(smoke, INPUT);
 pinMode(3, OUTPUT);
Serial.begin(9600); // Starts the serial communication
SPI.begin();      // Initiate  SPI bus
mfrc522.PCD_Init();
 //digitalWrite(LED, LOW);
}
void loop() {



int analogSensor = analogRead(smoke);
Serial.print("smoke: ");
  Serial.println(analogSensor);
  

  if(analogSensor>200){
    digitalWrite(3, HIGH);
  }
  else{
        digitalWrite(3, LOW);
        float distance = distanceSensor.measureDistanceCm(); 
Serial.println(distance);
if(distance<10 || mfrc522.PICC_IsNewCardPresent() ){
  motor.stop();
}
 else{
  motor.forward();
 }

  }




}
