#include <iostream>
using namespace std;

/**
   Se piede hacer un programa que se cargue una lista de numeros
   que finaliza cuando se ingresen 3 numero positivos

   informar la cantidad de numeros ingresados.

   2 -5 6 0 3

   registro: los numeros
   campo: [numero]

   cuantos numeros vamos a cargar? muchos
      while
      cantidaPositivos < 3

   el ultimo, forma parte del proceso de cada registro?
   do{
      pedimos
      procesamos
   }while();

*/

int main() {
   int numero, cantidadPositivos, cantidadNumeros;
   
   cantidadPositivos = 0;
   cantidadNumeros = 0;
   do{
      cout << "Ingrese numero: " << endl;
      cin >> numero;
      
      cantidadNumeros++;
      
      if(numero > 0){
         cantidadPositivos++;   
      }
      
   }while(cantidadPositivos < 3);
   
   cout << "La cantidad numeros ingresado es: " << cantidadNumeros << endl;
	
	return 0;
}

