///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dado el radio de un círculo calcular su superficie
///sup=PI*radio*radio;
int main(){
    const float PI=3.1416;
    float radio;
    float superficie;
    cout<<"INGRESE EL VALOR DEL RADIO ";
    cin>>radio;
    superficie=PI*radio*radio;
    cout<<"LA SUPERFICIE ES "<<superficie;
	cout<<endl;
	system("pause");
	return 0;
}
