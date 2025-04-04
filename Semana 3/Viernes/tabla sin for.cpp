#include <iostream>
using namespace std;
/**
   Se ingresa un numero y debe mostrar la tabla de multipliar
   del 1 al 10 de dicho numero.


   Datos de ingreso
      el numero

   dato salida
      tabla completa

   operaciones
      numero * 1
      numero * 2
      numero * 3
      ....
      numero * 10

*/

int main() {
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
	cout << numero << " x 1 = " << numero * 1 << endl;
   cout << numero << " x 2 = " << numero * 2 << endl;
   cout << numero << " x 3 = " << numero * 3 << endl;
   cout << numero << " x 4 = " << numero * 4 << endl;
   cout << numero << " x 5 = " << numero * 5 << endl;
   cout << numero << " x 6 = " << numero * 6 << endl;
   cout << numero << " x 7 = " << numero * 7 << endl;
   cout << numero << " x 8 = " << numero * 8 << endl;
   cout << numero << " x 9 = " << numero * 9 << endl;
   cout << numero << " x 10 = " << numero * 10 << endl;
   
	return 0;
}

