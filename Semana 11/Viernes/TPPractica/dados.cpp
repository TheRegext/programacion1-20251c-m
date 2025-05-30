#include <iostream>
#include "dados.h"

using namespace std;

int tirarDado6Caras(){
  return rand() % 6 + 1;
}

void generarTirada(int v[], int cant){
  for(int i=0; i<cant; i++){
    v[i] = tirarDado6Caras();  
  }
}

void mostrarTirada(int v[], int cant){
  cout << "Tirada de Dados: ";
  
  for(int i=0; i<cant; i++){
    cout << v[i] << " ";  
  }
  
  cout << endl;
}
