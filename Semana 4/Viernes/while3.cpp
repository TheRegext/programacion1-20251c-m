///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Hacer un programa para contar la cantidad de paquetes que se ingresaron en un camión.
/// El camión acepta hasta 1000 kilo de carga.
///El programa pide que se ingrese el peso de cada paquete

int main(){
    int peso, sumaPesos=0, cuentaPaquetes=0;
    while(sumaPesos<=1000){
        cout<<"INGRESAR EL PESO DEL PAQUETE ";
        cin>>peso;
        sumaPesos+=peso;
        cuentaPaquetes++;

    }
	cout<<"LA CANTIDAD DE PAQUETES ACEPTADOS FUE "<<cuentaPaquetes;
	cout<<endl;
	system("pause");
	return 0;
}
