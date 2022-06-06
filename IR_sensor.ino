//when ever the ir sensor detects something in its proximity it gives a low signal as output
#include <SPI.h>
#include <Servo.h>
Servo myservo;

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3c  ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);



int smoke = A3;
int count = 0;


void setup()
{
  Serial.begin(9600);

  myservo.attach(9);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);   
  display.setCursor(0, 5);
  // Display static text
  display.println("Welcome to TCET Metro"); //Write custom text here
  display.display(); 
  delay(2000);
    display.clearDisplay();
}
void loop()
{
  //display.clearDisplay();
  
  
  if (digitalRead(7)== LOW)
  {
    
    myservo.write(90);//open the door
    count++;
    
    display.clearDisplay();
    display.setCursor(4, 20);
    display.println("Passenger Count = ");
    display.display();
    display.setCursor(60, 44);
    display.println(count);
    display.display();
    //Serial.print("High");
     delay(1000);
  }
  else 
  {
    myservo.write(180);//close the door
    //Serial.print("Low");
    //delay(10);
    
  }
  if (count>=10){
   //close the door
   myservo.write(180);
    display.clearDisplay();
    display.setCursor(0, 20);
    display.println("Max capacity reached");
    display.display();
    delay(10000);
    count = 0;
    }
  
  
}
