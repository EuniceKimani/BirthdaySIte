
int a = 7;
int b = 6;
int c = 5;
int d = 11;
int e = 10;
int f = 8;
int g = 9;
int dp = 4;

// display 1
void display1(void){
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
}
// display 2
void display2(void){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  
}
// display 3
void display3(void){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(g,HIGH);
  
}
// display 4
void display4(void){
  digitalWrite(f,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
}
// display 5
void display5(void){
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  
}

// display 6
void display6(void){
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
}
// display 7
void display7(void){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
}


// display 8
void display8(void){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  
}
// display 9
void display9(void){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(f,HIGH);
}
// display 0
void display0(void){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
}

void cleardisplay(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(g,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
}
void setup() {
 
int i;
for(i=4;i<=11;i++){
pinMode(i,OUTPUT);
}
}

void loop() {
  while(true){
    cleardisplay();
    display0();
    delay(2000);
    cleardisplay();
    display1();
    delay(2000);
    cleardisplay();
    display2();
    delay(2000);
    cleardisplay();
    display3();
    delay(2000);
    cleardisplay();
    display4();
    delay(2000);
    cleardisplay();
    display5();
    delay(2000);
    cleardisplay();
    display6();
    delay(2000);
    cleardisplay();
    display7();
    delay(2000);
    cleardisplay();
    display8();
    delay(2000);
    cleardisplay();
    display9();
    delay(2000);
  }
  

}
















