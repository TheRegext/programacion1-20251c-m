///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///valores de entrada:
    ///temperatura máxima y temperatura mínima

///Salida:
    ///amplitud térmica
///Proceso
    ///amplitud térmica=temperatura máxima-temperatura mínima

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
