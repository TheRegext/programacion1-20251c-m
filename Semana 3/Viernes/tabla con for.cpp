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
   
   /// Mostrar la tabla
   for(int i=1; i<=10; i++){
      cout << numero << " x "<< i <<" = " << numero * i << endl;   
   }
   
   return 0;
}

