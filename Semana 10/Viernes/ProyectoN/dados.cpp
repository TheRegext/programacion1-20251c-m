#include <iostream>

#include "dados.h"
#include "funciones.h"

using namespace std;

int tirarDado12Caras(){
  return rand_range(1, 12);
}

void generarTirada(int v[], int cant){
  for(int i=0; i<cant; i++){
    v[i] = tirarDado12Caras();  
  }
}

void mostrarTirada(int v[], int cant){
  cout << "Tirada de Dados: ";
  
  for(int i=0; i<cant; i++){
    cout << v[i] << " ";  
  }
  
  cout << endl;
}
