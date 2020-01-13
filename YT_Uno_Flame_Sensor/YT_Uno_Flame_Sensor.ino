/*
 * Wiring :
 *   Flame Sensor Pin |   Arduino Pin
 * ====================================
 *    GND             |   GND
 *    VCC             |   5V
 *    D0              |   D2
 *    
 */

const int sensorPin = 2;     
const int outputPin =  13;  
int bacasensor = 0;   
 
void setup() {
  pinMode(outputPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(115200);
}
 
void loop() {
  bacasensor = digitalRead(sensorPin);
  if (bacasensor == HIGH) {
    digitalWrite(outputPin, HIGH);
    Serial.println("Terdeteksi Panas Api");
  } else {
    digitalWrite(outputPin, LOW);
    Serial.println("Tidak Terdeteksi Panas Api");
    delay(100);
  }
}
