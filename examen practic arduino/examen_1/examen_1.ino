long dni;
long residu;
long NIF;
void setup() {
Serial.begin(9600);
Serial.println("INTRODUEIX EL SEU DNI PER CALCULAR EL NIF.");
}
void loop() {
 while (Serial.available() > 0) {
 dni = Serial.parseInt();
 
  Serial.print("EL SEU DNI COMPLET ES ");
  Serial.print(dni);
  Serial.print("-");
NIF = Serial.parseInt(); 
{
  (residu = (dni % 23));
   switch ( residu )
 {  
 case 0:
 Serial.println("T");
 break;
 case 1:
 Serial.println("R");
 break;
 case 2:
 Serial.println("W");
 break;
 case 3:
 Serial.println("A");
 break;
 case 4:
 Serial.println("G");
 break;
 case 5:
 Serial.println("M");
 break;
 case 6:
 Serial.println("Y");
 break;
 case 7:
 Serial.println("F");
 break;
 case 8:
 Serial.println("P");
 break;
 case 9:
 Serial.println("D");
 break;
 case 10:
 Serial.println("X");
 break;
 case 11:
 Serial.println("B");
 break;
 case 12:
 Serial.println("N");
 break;
 case 13:
 Serial.println("J");
 break;
 case 14:
 Serial.println("Z");
 break;
 case 15:
 Serial.println("S");
 break;
 case 16:
 Serial.println("Q");
 break;
 case 17:
 Serial.println("V");
 break;
 case 18:
 Serial.println("H");
 break;
 case 19:
 Serial.println("L");
 break;
 case 20:
 Serial.println("C");
 break;
 case 21:
 Serial.println("K");
 break;
 case 22:
 Serial.println("E");
 break;
 default:
 Serial.println("DNI desconegut");
 }
  Serial.println("   ");
  Serial.println("INTRODUEIX UN ALTRE DNI PER CALCULAR EL  NIF");
  
  } 
 }
}
