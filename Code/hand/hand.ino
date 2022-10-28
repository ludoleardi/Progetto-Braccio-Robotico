#include <Servo.h> 

Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinkie;

# define thumbFlex A0
# define indexFlex A1 
# define middleFlex A2 
# define ringFlex A3 
# define pinkieFlex A4 

void setup() 
{ 
  thumb.attach(3);
  index.attach(4);
  middle.attach(5);
  ring.attach(6);
  pinkie.attach(7);

  Serial.begin(9600);
} 

void loop() 
{ 
  //dichiario le variabili per posizione motore e sensore flessione
  int thumbValue;
  int thumbPos;

  int indexValue;
  int indexPos;

  int middleValue;
  int middlePos;

  int ringValue;
  int ringPos;

  int pinkieValue;
  int pinkiePos;
  
  //leggo i valori dal sensore di flessione
  thumbValue = analogRead(thumbFlex);
  thumbPos = map(thumbValue, 770, 950, 0, 180);
  thumbPos = constrain(thumbPos, 0, 180);

  indexValue = analogRead(indexFlex);
  indexPos = map(indexValue, 770, 950, 0, 180);
  indexPos = constrain(indexPos, 0, 180);

  middleValue = analogRead(middleFlex);
  middlePos = map(middleValue, 770, 950, 0, 180);
  middlePos = constrain(middlePos, 0, 180);

  ringValue = analogRead(ringFlex);
  ringPos = map(ringValue, 770, 950, 0, 180);
  ringPos = constrain(ringPos, 0, 180);

  pinkieValue = analogRead(pinkieFlex);
  pinkiePos = map(pinkieValue, 770, 950, 0, 180);
  pinkiePos = constrain(pinkiePos, 0, 180);


  //setto le posizioni
  thumb.write(thumbPos);
  index.write(indexPos);
  middle.write(middlePos);
  ring.write(ringPos);
  pinkie.write(pinkiePos);
  
  /*
  Serial.print("sensor =");
  Serial.println(flexValue);
  Serial.print("servo =");
  Serial.println(servoPosition);
  */
  
  delay(20);
}
