#include <iostream>
#include "menu.h"
#include "juego.h"
using namespace std;

int seleccionarOpcion()
{
  int opcion;
  cout << "--- Menu Principal --- " << endl;
  cout<<" 1- Jugar"<<endl;
  cout<<" 2- Estad¡stica"<<endl;
  cout<<" 0- Salir"<<endl;
  cout << "-------------------"<<endl;
  cout << "Opcion: ";
  cin >> opcion;
  while(opcion <0 || opcion >2 )
  {
    cout << "Opcion incorrecta"<<endl;
    cout << "Opcion: ";
    cin >> opcion;
  }

  return opcion;
}

void ejecutarOpcion(int opcion, int &puntosMaximo)
{
  switch(opcion)
  {
  case 1:
    jugar(puntosMaximo);
    break;

  case 2:
    estadisticas(puntosMaximo);
    break;

  case 0:
    cout << "Gracias por usar nuestro juego!" << endl;
    break;
  }
}


void estadisticas(int puntosMaximo){
  cout << "Los puntos maximos hasta ahora son: " << puntosMaximo << endl;
}
