int FirstPin = 8;
int LastPin = 13;
int timer = 200;

void setup(){
  for(int i = FirstPin; i <= LastPin; i++){
    pinMode(i, OUTPUT);
  }
}

void loop(){
  //逐个开灯
  for(int j = FirstPin; j <= LastPin; j++){
    digitalWrite(j,HIGH);
    delay(200);
  }
  //逐个灭灯
  for(int j = FirstPin; j <= LastPin; j++){
    digitalWrite(j,LOW);
    delay(200);
  }
}
