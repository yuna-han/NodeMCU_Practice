#define RED_PIN D1
#define BLUE_PIN D2
#define YELLOW_PIN D3

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
}

void blink_LED(int pinNo, int delayTime) {
  int pin2,pin3;
  if( pinNo == RED_PIN) {
   pin2=BLUE_PIN;
   pin3=YELLOW_PIN; 
  }else if( pinNo == BLUE_PIN) {
   pin2=RED_PIN;
   pin3=YELLOW_PIN; 
  }else {
   pin2=RED_PIN;
   pin3=BLUE_PIN; 
  }
  digitalWrite(pinNo, HIGH);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  delay(delayTime);
}

int random_LED(){
  int ran,ranPIN;
  ran=random(3);
  if(ran==0)
    ranPIN=RED_PIN;
  else if(ran==1)
    ranPIN=BLUE_PIN;
  else
    ranPIN=YELLOW_PIN;
  return ranPIN;
}

void loop() {
  // put your main code here, to run repeatedly:
  blink_LED(random_LED(),1000);
  blink_LED(random_LED(),1000);
  blink_LED(random_LED(),1000);
  
}
