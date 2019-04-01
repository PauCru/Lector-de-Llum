/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino

const int led0 = 9;
const int led1 = 10;
const int led2 = 11;

int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
  Serial.print("Ldr0 val ");
  Serial.println(valLdr0);
  delay(500);
  valLdr1 = analogRead(ldr1);   // llegir valor ldr1
  Serial.print("Ldr1 val ");
  Serial.println(valLdr1);
  delay(500);
  valLdr2 = analogRead(ldr2);   // llegir valor ldr2
  Serial.print("Ldr2 val ");
  Serial.println(valLdr2);
  delay(500);
  
  valLdr0 = map(valLdr0, 0, 745, 0, 365);   // mapejar valor de 0-1023 a 0-255
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led

  valLdr1 = map(valLdr1, 0, 1020, 0, 655);
  analogWrite(led1, valLdr1);

  valLdr1 = map(valLdr2, 0, 728, 0, 352);
  analogWrite(led2, valLdr2);

}

//********** Funcions *************************************************************
