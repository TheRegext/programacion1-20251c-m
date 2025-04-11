#include <iostream>
using namespace std;

/***
   Regitro -> Es un conjunto de datos que representan algo concreto

   se ingrese las notas de un alumno
   Se pide el legajo, materia, nota

   el registro es el legajo con materia y nota
   
...

   se ingrese una lista de nuemeros
   registro es un numero


/// Si cargo 1 registro, es solo un cin por cada campo del registro

   /// si hay mas de 1, se utilizan ciclos repetitivos para 
   /// la carga de datos de cada de los registros

   --- Si se la cantidad de registros, entonces uso un for
   --- Si no se la cantidad, entonces sabemos que es un while
      si se que es un while debo buscar el criterio de corte


   Se ingresan las notas de los alumnos de materia de programacion
   por cada alumno se ingres: legajo y nota
   El programa finaliza cunado se carga un legajo negativo
   - se pide saber el almno que mas nota saco.

   registro: un alumno
   campos: [legajo, nota]
   -- cantidad, cuantos registros se cargan?
   -- la estructura es un while
      -- legajo >= 0
   cuando queremos que el ultimo registro se ignore
   pedi
   while(){

      procesar registro

      pedir
   }

*/

int main() {
   int legajo, nota, notaMayor, legajoMayor;
   
   cout << "Ingrese legajo: ";
   cin >> legajo;
   
   notaMayor = -5;
   while(legajo >= 0){
      cout << "Ingrese nota: ";
      cin >> nota;
      
      // pasan cosas
      if(notaMayor<0 || nota>notaMayor){
         notaMayor = nota;
         legajoMayor = legajo;
      }

      cout << "Ingrese legajo: ";
      cin >> legajo;
   }
   
   cout << "El alumno con la nota maxima es: " << legajoMayor << endl;
   cout << "Y la nota fue: " << notaMayor << endl;
	
	return 0;
}

