///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///dados 10 números que se ingresan por teclado calcular:
    ///El máximo
    ///El mínimo
    ///Cuántas veces se repite el máximo
    ///Cuántas veces se repite el mínimo
    ///El promedio
    ///La cantidad de valores menores al promedio

void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);
int buscarMaximo(int vec1[], int tam);
int buscarMinimo(int vec1[], int tam);
int contarRepetidos(int vec[], int tam, int valorABuscar);

int main(){
    const int TAM=10;
    int  vec1[TAM];
    cargarVector(vec1, TAM);
    int maximo=buscarMaximo(vec1, TAM);
    int minimo=buscarMinimo(vec1, TAM);
    cout<<"VALOR MAXIMO "<<maximo<<endl;
    cout<<"VALOR MINIMO "<<minimo<<endl<<endl;
	cout<<"EL MAXIMO SE REPITE "<<contarRepetidos(vec1, TAM, maximo)<<endl;
	cout<<"EL MINIMO SE REPITE "<<contarRepetidos(vec1, TAM, minimo);

	cout<<"EL 3 SE REPITE "<<contarRepetidos(vec1, TAM, 3);
	cout<<endl;
	system("pause");
	return 0;
}


void cargarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>v[i];
    }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
}

int buscarMaximo(int vec1[], int tam){
        int i, maximo;
        maximo=vec1[0];
        for(i=1;i<tam;i++){
            if(vec1[i]>maximo){
                maximo=vec1[i];
            }
        }
        return maximo;
}

int buscarMinimo(int vec1[], int tam){
        int i, minimo;
        minimo=vec1[0];
        for(i=1;i<tam;i++){
            if(vec1[i]<minimo){
                minimo=vec1[i];
            }
        }
        return minimo;
}
int contarRepetidos(int vec[], int tam, int valorABuscar){
    int i, repetidos=0;
    for(i=0;i<tam;i++){
        if(vec[i]==valorABuscar){
            repetidos++;
        }
    }
    return repetidos;
}
