#include "funciones.h"

int contarImpares(int vec[], int cant)
{
  int impares = 0;

  for (int i = 0; i < cant; i++)
  {
    if (vec[i] % 2 != 0)
    {
      impares++;
    }
  }
  
  return impares;
}
