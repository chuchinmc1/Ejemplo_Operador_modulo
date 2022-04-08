// Ejemplo Operador modulo en C
// 8 abril 2022

// Bibliotecas
#include<Serial.h>

// Constantes

// Variables
int dato = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Programa de uso del operador: modulo %");
  delay(1000);
}

void loop() {
  dato++;
  if(dato > 8){
    dato = 0;
  }

  dato %= 8;
  
  Serial.println(dato);
  delay();
}
