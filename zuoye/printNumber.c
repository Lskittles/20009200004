// C++ code
//
void setup()
{
  //pinMode(13, OUTPUT);
  for(int i = 3; i <= 10; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  pinMode(11, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop()
{
  loopShow();
}

void loopShow(){
    for(int i = 0; i <= 9; i++){
        printNumber2(i);
        for(int j = 0; j <= 9; j++){
            printNumber(j);
            if(digitalRead(11) == LOW){
                return;
            }
            delay(1000);
        }
    }
}

int printNumber(int num){
  for(int i = 3; i <= 6; i++)
  {
    digitalWrite(i, LOW);
  }
  switch(num){
		case 0: break;
		case 1: digitalWrite(3, HIGH); break;
		case 2: digitalWrite(4, HIGH); break;
		case 3: digitalWrite(3, HIGH); digitalWrite(4, HIGH); break;
		case 4: digitalWrite(5, HIGH); break;
		case 5: digitalWrite(3, HIGH); digitalWrite(5, HIGH); break;
		case 6: digitalWrite(4, HIGH); digitalWrite(5, HIGH); break;
		case 7: digitalWrite(3, HIGH); digitalWrite(4, HIGH);
    					digitalWrite(5, HIGH); break;
		case 8: digitalWrite(6, HIGH); break;
		case 9: digitalWrite(3, HIGH); digitalWrite(6, HIGH); break;
		default : return -1;
	}

	return num;
}

int printNumber2(int num){
  for(int i = 7; i <= 10; i++)
  {
    digitalWrite(i, LOW);
  }
  switch(num){
		case 0: break;
		case 1: digitalWrite(7, HIGH); break;
		case 2: digitalWrite(8, HIGH); break;
		case 3: digitalWrite(7, HIGH); digitalWrite(8, HIGH); break;
		case 4: digitalWrite(9, HIGH); break;
		case 5: digitalWrite(7, HIGH); digitalWrite(9, HIGH); break;
		case 6: digitalWrite(8, HIGH); digitalWrite(9, HIGH); break;
		case 7: digitalWrite(7, HIGH); digitalWrite(8, HIGH);
    					digitalWrite(9, HIGH); break;
		case 8: digitalWrite(10, HIGH); break;
		case 9: digitalWrite(7, HIGH); digitalWrite(10, HIGH); break;
		default : return -1;
	}

	return num;
}
