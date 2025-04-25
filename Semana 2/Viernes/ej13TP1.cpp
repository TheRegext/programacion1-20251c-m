///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int dineroARetirar, restoDeDinero;
    int cant1000, cant500, cant200,cant100;
    cout<<"INGRESAR CANTIDAD DE DINERO A RETIRAR ";
    cin>>dineroARetirar;
    /*if(dineroARetirar<100){
        cout<<"NO ES POSIBLE RETIRAR ESA CANTIDAD"<<endl;
        cout<<"IGUAL NO LE ALCANZA PARA COMPRAR NADA"<<endl;
        return 1;
    }*/

    ///operaciones de transformación de los datos de entrada en la salida pedida
    cant1000=dineroARetirar/1000;///
    restoDeDinero=dineroARetirar%1000;
    cant500=restoDeDinero/500;
    restoDeDinero=restoDeDinero%500;
    cant200=restoDeDinero/200;
    restoDeDinero=restoDeDinero%200;
    cant100=restoDeDinero/100;


    ///salida
    if(cant1000>0){
        cout<<"CANTIDAD DE BILLETES DE 1000 "<<cant1000<<endl;
    }
    if(cant500>0){
            cout<<"CANTIDAD DE BILLETES DE 500 "<<cant500<<endl;
    }
    if(cant200>0){
            cout<<"CANTIDAD DE BILLETES DE 200 "<<cant200<<endl;
    }
    if(cant100>0){
            cout<<"CANTIDAD DE BILLETES DE 100 "<<cant100<<endl;
    }
	int cantBilletes=cant1000+cant500+cant200+cant100;
	if(cantBilletes==0){
        cout<<"NO ES POSIBLE RETIRAR ESA CANTIDAD"<<endl;
        cout<<"IGUAL NO LE ALCANZA PARA COMPRAR NADA"<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
