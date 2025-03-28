#include <iostream>
using namespace std;

int main() {
   int m;
   
   cout << "Ingrese numero de la variable: ";
   cin >> m;
   
   cout << endl;
   
   if(m>5){
      cout << "La variable es mayor que 5";
   }
	else{
      cout << "La variable es menor o igual que 5";
   }
	return 0;
}

