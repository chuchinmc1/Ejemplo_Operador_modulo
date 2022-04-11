/* Ejemplo Operador modulo en C
 * Por: JMC
 * 8 abril 2022 
 */ 

// Bibliotecas

// Constantes

// Variables
int dato;
double timeStart, timeFinish;

// Definicion de objetos

// Condiciones iniciales
void setup() {// Inicio Void setup()
  Serial.begin(115200);
  Serial.println("Programa de uso del operador: modulo %");
  delay(5000);
}// Fin Void setup()

// Cuerpo del programa
void loop() { // Inicio void loop()

  dato = 0;
  timeStart = micros();
  for (int i=0; i<10000; i++){// inicio ciclo for
    dato++;
    // contador de anillo con comparador
    if(dato > 7){
      dato = 0;
    }
  }//fin ciclo for
  timeFinish = micros();
  Serial.println("Tiempo con comparaciones (us): ");
  Serial.println(timeFinish - timeStart);
  delay(3000);
  
  dato = 0;
  timeStart = micros();
  for (int i=0; i<10000; i++){// inicio ciclo for
    dato++;
    // contador de anillo con operador
    dato %= 8;    
  }//fin ciclo for
  timeFinish = micros();
  Serial.println("Tiempo con operadores (us): ");
  Serial.println(timeFinish - timeStart);
  
  delay(3000);
    
} //Fin void loop()

// Funciones del usuario
