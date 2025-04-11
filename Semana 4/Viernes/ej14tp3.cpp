///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>
///Dada una lista de 7 números enteros informar cual es el primer,
///el segundo, el anteúltimo y el último número impar ingresado.
///Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.


using namespace std;


int main(){
    int i, num;
    int primero=0, segundo=0, anteUltimo=0, ultimo=0;
    int cont=0;
	for(i=1;i<=7;i++){
        ///por acá solo pasan impares
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num%2==1){
            cont++;
            if(cont==1){
                primero=num;
            }
            if(cont==2){
                segundo=num;
            }
            anteUltimo=ultimo;
            ultimo=num;
        ///
        }


	}
	cout<<"PRIMER IMPAR "<<primero<<endl;
	cout<<"SEGUNDO IMPAR "<<segundo<<endl;
	cout<<"ANTEULTIMO IMPAR "<<anteUltimo<<endl;
	cout<<"ULTIMO IMPAR "<<ultimo<<endl;
	cout<<endl;

	system("pause");
	return 0;
}
