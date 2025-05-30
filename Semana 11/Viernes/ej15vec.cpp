///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;
///Dada una lista de 5 números, cargarlos en un vector.
///Armar luego otro vector de 9 elementos donde por cada 2 elementos del vector original
///intercale el promedio de ellos.
///Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: [2, 3, 4, 5, 6, 7, 8, 9, 10].

void cargarVector(int *v, int tam);
void intercalarValores(int v1[],int v2[]);
void mostrarVector(int v[], int tam);

int main(){
    int v1[5], v2[9];
    cargarVector(v1, 5);
    intercalarValores(v1,v2);
    mostrarVector(v2,9);
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

void intercalarValores(int v1[],int v2[]){
        int i, j=0;
        for(i=0;i<9;i++){
            if(i%2==0){
                v2[i]=v1[j];
                j++;
            }
            else{
                v2[i]=(v1[j-1]+v1[j])/2;
            }
        }
}

void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<endl;
    }
}
