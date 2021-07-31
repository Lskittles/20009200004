int i=0;
int j=0;
int k=0;

void setup()
{
  for(i=3;i<=10;i++)
  {
    pinMode(i,OUTPUT);
  }
  for(i=3;i<=10;i++)
  {
    digitalWrite(i,HIGH);
  }
}

void loop()
{
  int num[10][7]={
    {3, 4, 5, 6, 7, 8},
    {4, 5},
    {3, 4, 6, 7, 9},
    {3, 4, 5, 6, 9},
    {4, 5, 8, 9},
    {3, 5, 6, 8, 9},
    {3, 5, 6, 7, 8, 9},
    {3, 4, 5},
    {3, 4, 5, 6, 7, 8, 9},
    {3, 4, 5, 6, 8, 9}
  };
  for(i=0;i<10;i++)
  {
    for(j=0;j<7;j++)
    {
      digitalWrite(num[i][j],LOW);
    }
    delay(500);
    for(k=3;k<=9;k++)
    {
      digitalWrite(k,HIGH);
    }
    delay(500);
  }
}
