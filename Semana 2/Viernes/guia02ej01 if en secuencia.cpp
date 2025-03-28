#include <iostream>
using namespace std;

/***
   Hacer un programa donde se ingrese un numero
   y muestre si dicho numero es positivo, negativo o cero
*/


/***
   IF SECUENCIAL
   EL RESULTADO NO ES EXCLUYENTE
*/
int main() {
	int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero > 0){
      cout << "Es positivo" << endl;
   }
   
   if(numero < 0){
      cout << "Es negativo" << endl;
   }
   
   if(numero == 0){
      cout << "Es cero" << endl;
   }
   
	return 0;
}

