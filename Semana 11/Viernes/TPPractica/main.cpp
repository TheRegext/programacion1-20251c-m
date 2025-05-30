#include <iostream>
#include "menu.h"
using namespace std;

int main()
{
  int opcion;
  int puntosMaximo = 0;

  do
  {
    system("cls");
    opcion = seleccionarOpcion();
    ejecutarOpcion(opcion, puntosMaximo);
    system("pause");
  }
  while(opcion != 0);
  
  return 0;
}
