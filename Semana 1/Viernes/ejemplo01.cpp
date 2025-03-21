#include <iostream>
using namespace std;

/**
   Hacer un programa para calcular e informar el importe de una venta, 
   a partir del ingreso de una cantidad de unidades de alfajores.  

   El comercio vende cada caja de 12 alfajores a $1000, 
   y cada alfajor suelto a $ 100


   Identificamos el problema: ingresar la cantidad de alfajores, y mostrar el importe

   Analisis:
      DE:
         cantidadAlfajores
      DS:
         importeTotal
      Operaciones:
         importeTotal = cantidadCajas * 1000 + sueltos * 100
         sueltos = cantidadAlfajores % 12
         cantidadCajas = cantidadAlfajores / 12

   Estrategia: pensar en el que?
      Pedimos cantidad de alfajores
      calcular las cantidad de cajas
      calcular los sueltos
      calcular el moto total
      mostrar el monto total
      
   Diagramarlo:
   Codificacion:

*/

/***

   el resultado de una division es el Cociente 
      
   
   Cociente real (decimal) 
   Cociente entero 

   operador => /

   operacion => (operando) / (operando)

   ambos operandos son enteros siempre el resultado sera otro entero
   si alguno de los operando es real, siempre el resultado sera otro real.
*/

/// PENSAMOS EN EL COMO?
int main() {
   /// Declarar variables
   int cantidadAlfajores, cantidadCajas, sueltos;
   float importeTotal;
   
   /// Pedimos cantidad de alfajores
   cout << "Ingrese cantidad de alfajores: ";
   cin >> cantidadAlfajores;
   
   /// calcular las cantidad de cajas
   //cantidadCajas = (float)cantidadAlfajores / 12;
   cantidadCajas = cantidadAlfajores / 12;
   
   /// calcular los sueltos
   sueltos = cantidadAlfajores % 12;
   
   /// calcular el moto total
   //importeTotal = (int)cantidadCajas * 1000 + sueltos * 100;
   importeTotal = cantidadCajas * 1000 + sueltos * 100;
   
   /// mostrar el monto total
   //cout << "La cantidad de cajas son: " << cantidadCajas << endl;
   cout << "El importe de la venta es: $" << importeTotal << endl;
   
	return 0;
}

