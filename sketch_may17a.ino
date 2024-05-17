void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorvalue=analogRead(A0);
Serial.println(sensorvalue);
if  (sensorvalue>=500)
{

  sensorvalue=500;

}

else if(sensorvalue<=100)
{
  sensorvalue=100;
}

int val=map(sensorvalue,100,500,0,255);
analogWrite(9,val);

delay(1);



}


