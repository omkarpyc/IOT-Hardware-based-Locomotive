# IOT-Hardware-based-Locomotive

The main controller in this project is an Arduino Nano. A source of 5V for the Arduino is provided via a power bank. The Arduino is linked to all of the components that are employed in the train's various operations. Initially, the train will obtain supplies from a source and prepare to move. The motor driver IC and door motor were powered by a 12V battery in this case. However, the LCD will first display the message "The train will depart from the station in a few minutes." Every LCD message and door operation triggers the buzzer.

The passenger counting portion was activated, and it used IR modules to count the passengers and display the results on the LCD. The LCD will then display the words "Doors are shutting" along with a buzzer. The train starts moving and departs from the station when the motor status is changed from off to on.

The LCD will display the message "Train is arriving on the station in few minutes" with buzzer functioning when the train arrives at the station. Using RFID sensors and RFID tags, the status of the motor switches from on to off.

The train has an RFID sensor, and RFID tags are placed at the stop. The train's motors are switched from on to off when RFID tags are detected by the RFID sensor. The message "The doors are opening" will appear on the LCD, and the door control will open the door. During the train's operation, the whole departure and arrival process is repeated at each stop. It also has some extra capabilities, such as a GSM-based SMS service that can be used to track the train's location and communicate data to the control centre.

This train has a solar panel on top that powers the train's auxiliary such as LCD screens, mobile charging outlets, lights, and fans. The inverters may transform the generated solar electricity into AC power based on the requirements. The train's electricity usage is reduced because to the installation of solar panels.

For protection, it also contains smoke detection through the MQ2 smoke sensor. When there is an issue in the train, such as a system failure or an electric shock, smoke is formed, which the smoke sensor detects and sends a signal to the Arduino for train protection. It safeguards the train from fire as well as short circuits.

It also has a train-mounted emergency braking button. It is used to apply brakes to the train in an emergency. A vibration sensor is also included for safety purposes. When an emergency arises in the train due to any form of breakdown, vibration occurs, which is detected by the vibration sensor and signals the control system by GSM facility.

The system may be hacked, and the destination can be modified, putting passengers' lives in peril. This automation was previously implemented using PIC microcontrollers, but today we have Raspberry Pi and Arduino.

![WhatsApp Image 2022-06-07 at 2 50 31 AM (1)](https://user-images.githubusercontent.com/77581464/172254667-0b03a6f1-906f-49c5-81c5-9bfd961b0cc8.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM (2)](https://user-images.githubusercontent.com/77581464/172254684-adbaa4c1-8ebb-410b-a0b7-05e0d3a7e090.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM](https://user-images.githubusercontent.com/77581464/172254760-297c2096-653f-4bb9-9426-21a56a2ed6b4.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM (3)](https://user-images.githubusercontent.com/77581464/172254761-4101549f-3126-429a-bab2-7fd36cac8a3c.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM (4)](https://user-images.githubusercontent.com/77581464/172254765-d8ba436d-f588-40ec-9e17-e7435273562c.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM (5)](https://user-images.githubusercontent.com/77581464/172254767-acd04aee-2a89-4c03-82e9-dee567abbd35.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM (6)](https://user-images.githubusercontent.com/77581464/172254772-598cefa6-fc67-4c61-8350-995402f43c93.jpeg)
![WhatsApp Image 2022-06-07 at 2 50 31 AM (7)](https://user-images.githubusercontent.com/77581464/172254775-bc259213-2ce7-434c-9aee-366e4394ea52.jpeg)


