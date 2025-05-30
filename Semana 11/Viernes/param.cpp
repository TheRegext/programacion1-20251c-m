///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

void cambiaAlgo(int &x);

void porDireccion(int *x); ///puntero almacena direcciones

int main(){
    int a=0;
   // cambiaAlgo(refe);
//	cout<<"VALOR DE LA VARIABLE EN main() "<<a;
	porDireccion(&a);
	cout<<"VALOR DE LA VARIABLE EN main() "<<a;
	cout<<endl;
	system("pause");
	return 0;
}

void cambiaAlgo(int &x){
    cout<<"VALOR EN LA FUNCION DE LA VARIABLE RECIBIDA "<<x<<endl;
    x=10;
}

void porDireccion(int *x){
    cout<<"VALOR DE LA VARIABLE EN LA FUNCION "<<x<<endl;
    cout<<"VALOR DE LA VARIABLE CON * EN LA FUNCION "<<*x<<endl;
    *x=15;

}



