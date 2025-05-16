#include <iostream>

using namespace std;

/**
  Hacer un programa que pida 10 numeros y muestre el mayor de ellos
  Usar vector para cargar, funiones para cargarVector, calcularMaximo
  
  
  identificador: nombre
  variable: un espacio de memoria que usaremos para guardar algo
  
  vector o array:
    es un conjunto de variables bajo un mismo identificador
    
  identificador[indice]
  
  indice es un numero natural con cero, con base cero
  base cero significa que el primer elemento es el cero
  por lo tanto el ultimo elemento es el indice igual a la cantidad - 1
  
*/

void cargarVector(int vec[], int tam);
int maximoVector(int vec[], int tam);
void mostrarVector(int vec[], int tam);

int main(){
  int numero = 1000; // reserva un espacio en la memoria donde hace referencia con el identificador "numero"
  int numeros[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}; /// solo se hace al momento de declarar el vector
  int maximo;
  
  /// cargarVector(numeros, 10);
  
  ///
  maximo = maximoVector(numeros, 10);
  
  cout << "El maximo es: " << maximo << endl;
  
  mostrarVector(numeros, 10);
  
  
    
  return 0;
}


void cargarVector(int vec[], int tam){
  for(int i=0; i<tam; i++){
    cout << "Ingrese numero: ";
    cin >> vec[i];
  }
}

void mostrarVector(int vec[], int tam){
  for(int i=0; i<tam; i++){
    cout << "Vector[" << i<< "] = " << vec[i] << endl;
  }
}

int maximoVector(int vec[], int tam){
  int maximo;
  
  maximo = vec[0];
  
  for(int i=1; i<tam; i++){
    if(vec[i] > maximo){
      maximo = vec[i];    
    }  
  }
  
  return maximo;
}


