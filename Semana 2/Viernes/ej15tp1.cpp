///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///valores de entrada:
    ///temperatura m�xima y temperatura m�nima

///Salida:
    ///amplitud t�rmica
///Proceso
    ///amplitud t�rmica=temperatura m�xima-temperatura m�nima

int main(){
    int tempMax, tempMin, amplitud;
    cout<<"INGRESAR LA TEMPERATURA MAXIMA ";
    cin>>tempMax;
    cout<<"INGRESAR LA TEMPERATURA MINIMA ";
    cin>>tempMin;
    amplitud=tempMax-tempMin;
    cout<<"AMPLITUD TERMICA "<<amplitud;
	cout<<endl;
	system("pause");
	return 0;
}
