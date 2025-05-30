#include <iostream>
#include "juego.h"
#include "dados.h"
#include "funciones.h"
using namespace std;

void jugar(int &puntosMaximo){
  int dados[5];
  int puntos = 0;
  
  do{
      generarTirada(dados, 5);
      mostrarTirada(dados, 5);
      puntos += calcularPuntos(dados, 5);
      cout << "Puntos acumulados: " << puntos<<endl;
    
  }while(puntos < 25);
  
  cout << "LLegaste a los 25!" << endl;
  
  /// guardamos los puntos maximos
  if(puntos > puntosMaximo){
    puntosMaximo = puntos;  
  }
}

int calcularPuntos(int dados[], int cant){
  int puntos;
  
  puntos = maximoVector(dados, cant);
  
  return puntos;
}
