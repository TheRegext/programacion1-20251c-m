///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dadas las edades de los alumnos de un curso, calcular cuál es el promedio de edad.
///Como no se sabe la cantidad de estudiantes se puso para indicar el fin de las edades a procesar
///una edad igual a 0



int main(){
    int edad, sumaEdad=0, cantidadAlumnos=0;
    float promedio;

    cout<<"INGRESAR EDAD ";
    cin>>edad;
    while(edad!=0){
       ///instrucciones a repetir
       ///se repiten MIENTRAS LA CONDICION SEA VERDADERA
       sumaEdad+=edad;
       cantidadAlumnos++;
       cout<<"INGRESAR EDAD ";
       cin>>edad;
    }
    promedio=(float)sumaEdad/cantidadAlumnos;
    cout<<"EL PROMEDIO ES "<<promedio;
	cout<<endl;
	system("pause");
	return 0;
}
