///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Hacer un programa para ingresar una lista de 10 números e informar el máximo
/// de los negativos y el mínimo de los positivos.
///Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
///Máximo Negativo -3. Mínimo Positivo 2.


int main(){
    int i, num, maxNegativo, minPositivo;
    int contNegativos=0, contPositivos=0;
    const int VUELTAS=5;
    for(i=1;i<=VUELTAS;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num<0){
            contNegativos++;
            if(contNegativos==1){
                maxNegativo=num;
            }
            else{
                if(num>maxNegativo){
                    maxNegativo=num;
                }
            }
        }
        else{
            if(num>0){
                contPositivos++;
                if(contPositivos==1){
                    minPositivo=num;
                }
                else{
                    if(num<minPositivo){
                            minPositivo=num;
                    }
                }
            }
        }

    }
    if(contNegativos>0){
        cout<<"MAXIMO DE LOS NEGATIVOS "<<maxNegativo<<endl;
    }
    else cout<<"NO HUBO NEGATIVOS"<<endl;
    if(contPositivos>0) cout<<"MINIMO DE LOS POSITIVOS "<<minPositivo<<endl;
    else cout<<"NO HUBO POSITIVOS"<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
