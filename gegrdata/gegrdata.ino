int enable = 10;


void setup() {
  
  Serial1.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  
  
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  pinMode(24, INPUT);
  pinMode(25, INPUT);
  pinMode(26, INPUT);
  pinMode(27, INPUT);
  pinMode(28, INPUT);
  
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  pinMode(34, INPUT);
  pinMode(35, INPUT);
  pinMode(36, INPUT);
  pinMode(37, INPUT);
  pinMode(38, INPUT);
  
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  
  
  pinMode(enable, OUTPUT);
  digitalWrite(enable, HIGH);
  
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int d2 = digitalRead(22);
  int c2 = digitalRead(23);
  int b2 = digitalRead(24);
  int a2 = digitalRead(25);
  int f2 = digitalRead(26);
  int e2 = digitalRead(27);
  int g2 = digitalRead(28);
  
  
  int d1 = digitalRead(2);
  int c1 = digitalRead(3);
  int b1 = digitalRead(4);
  int a1 = digitalRead(5);
  int f1 = digitalRead(6);
  int g1 = digitalRead(7);
  int e1 = digitalRead(8);
  
  
  int d3 = digitalRead(32);
  int b3 = digitalRead(33);
  int f3 = digitalRead(34);
  int e3 = digitalRead(35);
  int g3 = digitalRead(36);
  int a3 = digitalRead(37);
  int c3 = digitalRead(38);
  
 
  // Serial.println(String(d1)+String(c1)+String(b1)+String(a1)+String(f1)+String(e1)+String(g1));
  

 
  

  
  int digitalValue1 = getDigitalValue(d3, c3, b3, a3, f3, e3, g3);
  int digitalValue2 = getDigitalValue(d2, c2, b2, a2, f2, e2, g2);
  int digitalValue3 = getDigitalValue(d1, c1, b1, a1, f1, e1, g1);
  // Serial.println(String(digitalValue1) + String(digitalValue2));
  // Serial1.println(String(digitalValue1) + String(digitalValue2));
  
  // Serial.println(getPolarity(digitalRead(14), digitalRead(15)) + String(digitalValue2) + String(digitalValue3) + "." + String(digitalValue1));
   Serial1.println(getPolarity(digitalRead(14), digitalRead(15)) + String(digitalValue1) + String(digitalValue2)+ "." +String(digitalValue3));
  
 
  
//   Serial.println(String(d3)+String(c3)+String(b3)+String(a3)+String(f3)+String(e3)+String(g3));
//   Serial.println(String(d2)+String(c2)+String(b2)+String(a2)+String(f2)+String(e2)+String(g2));
//   Serial.println(String(d1)+String(c1)+String(b1)+String(a1)+String(f1)+String(e1)+String(g1));
    
 
   delay(500);

}

String getPolarity(int v1, int v2)
{
  if(v1 == 0)
  {
    return "-";
  }
  else if(v2 == 0){
    return "1";
  }
  else
  return "";
}

int getDigitalValue(int a, int b, int c, int d, int e, int f, int g)
{
  if( a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 1) //no 0 
  {
    return 0;
  }
  else if( a == 1 && b == 0 && c == 0 && d == 1 && e == 1 && f == 1 && g == 1)   // no 1
  {
    return 1;
  }
  else if( a == 0 && b == 1 && c == 0 && d == 0 && e == 1 && f == 0 && g == 0)   // no 2
  {
    return 2;
  }
  else if( a == 0 && b == 0 && c == 0 && d == 0 && e == 1 && f == 1 && g == 0)   // n0 3
  {
    return 3;
  }
  else if( a == 1 && b == 0 && c == 0 && d == 1 && e == 0 && f == 1 && g == 0)   // no 4
  {
    return 4;
  }
  else if( a == 0 && b == 0 && c == 1 && d == 0 && e == 0 && f == 1 && g == 0)  // no 5
  {
    return 5;
  }
  else if( a == 0 && b == 0 && c == 1 && d == 0 && e == 0 && f == 0 && g == 0)  // no 6
  {
    return 6;
  }
  if( a == 1 && b == 0 && c == 0 && d == 0 && e == 1 && f == 1 && g == 1) // no 7
  {
    return 7;
  }
  else if( a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0) // no 8 
  {
    return 8;
  }
  else if( a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 1 && g == 0) // no 9
  {
    return 9;
  }
  else
  {
    return 0;
  }
  
}





