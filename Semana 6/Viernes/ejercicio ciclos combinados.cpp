#include <iostream>
using namespace std;

/**
   un registro es un conjunto de campos que representan algo puntual

   Una tienda vende cosas por cada venta se carga:
      numero de venta
      numero de producto
      cantidad
      precio unitario

   por cada venta informar el monto


   ------------------

   se ingresan una lista de numeros impares
   por cada numero identificar si es primo

   ------------------

   
   
*/

/**
   Vamos a utilizar ciclos combinados como estrategia de carga de datos.
   La informacion viene agrupada de alguna manera!

   for -> for
   
   for -> while
   whlie -> for
   while -> while

   antigua!
   corte de control -> es muy bueno para ver combinaciones de ciclos
*/

/**
   Kloster Academy tiene un total de 7 cursos que se dictan durante todo el año, 
   cada mes van registrando la cantidad de alumnos que se inscribieron a cada 
   uno de los cursos.
   Por cada registro tienen:

   - Mes
   - Número de Curso
   - Cantidad de Alumnos

   Nos piden hacer un programa que, al ingresar todos los registros del año pasado, 
   nos muestre cuántos alumnos fueron inscritos en cada uno de los meses, 
   sabiendo que todos los datos están agrupados por Mes, pero no están ordenados.

   - Mostrar la cantidad de alumnos inscritos durante todo el anio
   - La cantidad de meses donde hubo un curso sin inscriptos


   mes 1
    2: 100
    3: 0
    4: 0


   grupos => mes  
         12 meses

   registros => cursos para ese mes
         7 cursos
      
  


*/

int main() {
   const int CANTIDAD_MESES = 3; /// constantes
   const int CANTIDAD_CURSOS = 3;
   
   int mes, curso, cantidadAlumnos;
   int cantidadAlumnosMes, cantidadAlumnosTotales;
   int cantidadMesesSinInscripciones;
   bool hayCursosSinInscripciones;
   
   /// inicializar las cosas que son de todos
   cantidadAlumnosTotales = 0;
   cantidadMesesSinInscripciones = 0;
   
   for(int i=1; i<=CANTIDAD_MESES; i++){
      /// inicializar las cosas que son del grupo
      cantidadAlumnosMes = 0;   
      hayCursosSinInscripciones = false;
         
      for(int j=1; j<=CANTIDAD_CURSOS; j++){
         cout << "Ingrese mes: ";
         cin >> mes;
         
         cout << "Ingrese curso: ";
         cin >> curso;
         
         cout << "ingrese cantidad de alumnos: ";
         cin >> cantidadAlumnos;
         
         
         /// procesar/mostrar las cosas que son del registro
         cantidadAlumnosMes += cantidadAlumnos;
         cantidadAlumnosTotales += cantidadAlumnos;
         
         if(cantidadAlumnos == 0){
            hayCursosSinInscripciones = true;
         }
      }
      /// procesar/mostrar las cosas que son del grupo
      cout << "---------------" << endl;
      cout << "La cantidad de alumnos son: " << cantidadAlumnosMes << endl;
      
      if(hayCursosSinInscripciones){
         cantidadMesesSinInscripciones++;
      }
   }
   cout << "******************" << endl;
   /// procesar/mostrar las cosas son de todos
   cout << "La cantidad total de alumnos de todo el anio fue: " << cantidadAlumnosTotales << endl;
   cout << "La cantidad de mese donde hubo un curso sin inscritos son: " << cantidadMesesSinInscripciones << endl;
   
   
   
   
	
	return 0;
}












