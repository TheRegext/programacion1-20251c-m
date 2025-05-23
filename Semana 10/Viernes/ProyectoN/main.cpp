#include <iostream>
#include <ctime>

#include "dados.h"

using namespace std;


int main()
{
  /// siempre empiece con un numero diferente
  srand(time(0));
  int tirada[5];
  
  generarTirada(tirada, 5);
  
  mostrarTirada(tirada, 5);
  
   
  

  return 0;
}



