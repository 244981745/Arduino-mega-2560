const char ledPin = 13;
unsigned char i=0;
bool  flag  = true;

void setup() {
  pinMode(ledPin,OUTPUT);
}


void loop() {
  if(flag)i+=10;
  else  i-=10;
  analogWrite(ledPin,i);
  delay(50);
  if(i > 250)flag   = false;
  if(i < 10)  flag  = true;
}
