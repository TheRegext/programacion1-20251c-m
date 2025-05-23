///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>

# include<cstring>///string.h

using namespace std;


void mostrarCadena(char cad[]);

///Ingresar valores
///Mostrar valores
///Comparar una variable con otra-> strcmp()
///Asignar una variable a otra->strcpy()

int main(){
    ///string
    char letra='p';
    char letras[10];
    char palabra[10];
    int vec[10];
    ///palabra=letras;///NO SE PUEDE ASIGNAR DE MANERA DIRECTA

    ///cout<<vec<<endl;
    ///cout<<&vec[0]<<endl; ///al poner & delante del nombre de una variable se obtiene la
                        /// direcció que esa variable ocupa en la memoria.

    cout<<"INGRESAR UNA CADENA ";
    cin>>letras;
    //strcpy(palabra, letras);
    //cout<<palabra<<endl;
    cout<<"INGRESAR UNA CADENA ";
    cin>>palabra;
    ///if(palabra==letras){NO SE PUEDE COMPARAR DE MANERA DIRECTA. HAY QUE USAR UNA FUNCION->strcmp()
    int valorDevuelto=strcmp(letras, palabra);
    cout<<"VALOR DEVUELTO POR strcmp() "<<valorDevuelto<<endl;

    if(valorDevuelto==0){
        cout<<"LAS DOS CADENAS SON IGUALES";
    }
    else{
        cout<<"LAS DOS CADENAS SON DISTINTAS";
    }

	cout<<endl;
	system("pause");
	return 0;
}

void mostrarCadena(char cad[]){
    int i=0;
    while(cad[i]!='\0'){
        cout<<cad[i];
        i++;
    }

}
