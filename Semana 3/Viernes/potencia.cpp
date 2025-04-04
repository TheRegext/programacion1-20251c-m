#include <iostream>
using namespace std;

/**
   2^3 = 2 * 2 * 2 = 8
   resultado = 1

   resultado = resultado * 2
   resultado = resultado * 2
   resultado = resultado * 2
  
   resultado = 8

   2^4 = 2 * 2 * 2 * 2 = 16
   resultado = 2 * 2
   resultado = resultado * 2
   resultado = resultado * 2
   resultado = 16
   
   base^exponente

   resultado = 1
   // repetir exponentes veces
   resultado = resultado * base;

   

*/

int main() {
   int base, exponente, resultado;
      
   cout << "Ingrese base: ";
   cin >> base;
   
   cout << "Ingrese exponente: ";
   cin >> exponente;
   
   resultado = 1;
   /// calcular la potecia
   for(int i=1; i<=exponente; i++){
      resultado = resultado * base;
   }
   
   cout << "El resultado es: " << resultado << endl;
	
	return 0;
}

