#include <iostream>
using namespace std;

/***
   Hacer un programa que se ingresen 5 numeros
   y muestre la suma de todos ellos

   2 5 10 6 9 

   datos entrada 
      5 numeros

   datos salida
      suma

   operaciones
      suma = 0
      /// repetir? 5
      suma = suma + numero

   /// estrategia?
   repetir 5 
      pedir el numero
      acumular dicho numero
   mostramos la suma
*/

int main() {
	int numero, suma;

   /// para que comience en cero
   suma = 0;
   
   /// lo usamos para pedir los 5 numeros
   /// para pedir los registros
   for(int i=1; i<=10; i++){
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// acumular
      suma = suma + numero;
   }
   
   
   cout << "La suma de todos es: " << suma << endl;
   
	return 0;
}

