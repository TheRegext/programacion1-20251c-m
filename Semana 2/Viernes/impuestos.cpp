///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dado el precio de un producto sin el IVA calcular e informar el valor de venta.
///El valor de venta se obtiene sumando al valor inicial un 18%
///precioVenta=precioInicial+precioInicial*IVA/100
///precioVenta=precioInicial+precioInicial*0.18
///precioVenta=precioInicial*(1+1*0.18)
///precioVenta=precioInicial*(1+0.18)
///precioVenta=precioInicial*1.18


int main(){
    const float IVA=1.18;
    float precioInicial;
    float precioFinal;
    cout<<"INGRESE EL PRECIO INICIAL ";
    cin>>precioInicial;
    precioFinal=precioInicial*IVA;
    cout<<"EL PRECIO FINAL ES "<<precioFinal;
	cout<<endl;
	system("pause");
	return 0;
}
