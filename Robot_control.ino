void setup() {
  //declaration of input pins
  pinMode(3,INPUT); //left motor
  pinMode(5,INPUT);
  //right motor
  pinMode(6,INPUT); 
  pinMode(9,INPUT);
   
  Serial.begin(9600);  
  // put your setup code here, to run once:

}

void loop() {
  
  int inputdata=Serial.read();
  if (inputdata==1)
  //move straight
  {
    analogWrite(3,125);
    analogWrite(4,0);
    analogWrite(6,125);
    analogWrite(9,0);
  }
  if (inputdata==2)
  // left
  {
    analogWrite(3,0);
    analogWrite(4,0);
    analogWrite(6,125);
    analogWrite(9,0);
  }
  if(inputdata==3)
  //right
  {
    analogWrite(3,125);
    analogWrite(4,0);
    analogWrite(6,0);
    analogWrite(9,0);
  }
}
