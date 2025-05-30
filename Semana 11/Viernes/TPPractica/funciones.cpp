#include <iostream>
#include "funciones.h"
using namespace std;

int posicionMaximoVector(int v[], int tam)
{
  int i, posMax=0;
  for(i=1; i<tam; i++)
  {
    if(v[i]>v[posMax])
    {
      posMax=i;
    }
  }
  return posMax;
}

int maximoVector(int vec[], int cant){
  int pos = posicionMaximoVector(vec, cant);
  return vec[pos];
}
