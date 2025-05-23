#include <iostream>
#include "funciones.h"

using namespace std;

int rand_range(int inicio, int fin)
{
  int cantidad = fin - inicio + 1;

  return rand() % cantidad + inicio;
}
