#include <iostream>
using namespace std;

/***
   Hacer un programa que dado un numero muestre
   si dicho numero es par o impar


   que es un numero?
   un numero es todo numero divisible por 2
   cuando un numero es divisible por otro?
   cuando al dividirlo el resto es cero
   
*/

int main() {
   
   int numero;
   cout << "Ingrese numero: ";
   cin >> numero;
   
   if(numero%2 == 0){
      cout << "Es un numero par!" << endl;
   }
   else{
      cout << "Es un numero impar!" << endl;
   }
	
	return 0;
}

