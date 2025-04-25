#include <iostream>
using namespace std;
/***
   Dada una lista de numeros compuesta por grupos donde 
   cada grupo esta separado del siguiente por un cero, 
   y la lista de numeros finaliza cuando se ingresan dos ceros consecutivos, 
   se pide determinar e informar:


   Registro es el numero
   Grupos lista de numeros



   
*/

int main(int argc, char *argv[]) {
   int numero;
   
   cout << "Ingrese numero: ";
   cin >> numero;
   
   while(numero != 0){
      cout << "Comienza grupo!" << endl;
      while(numero != 0){
         
         
         cout << "Ingrese numero: ";
         cin >> numero;
      }
      /// procesamos grupo
      cout << "Termina grupo!" << endl;
      cout << "Ingrese numero: ";
      cin >> numero;
   }
   cout << "Termina Programa!" << endl;


return 0;
}
   
