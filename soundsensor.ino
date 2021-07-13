const int crypin=12; // ledpin and soundpin are not changed throughout the process
const int soundpin=A5;
const int threshold=26; // sets threshold value for sound sensor
void setup() {
Serial.begin(9600);
pinMode(crypin,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {
int soundsens=analogRead(soundpin); // reads analog data from sound sensor
 float voltage = soundsens ;
 Serial.println(voltage);
if (soundsens>=threshold) {
digitalWrite(crypin,HIGH); //turns led on
delay(1000);
}
else{
digitalWrite(crypin,LOW);
}
}
