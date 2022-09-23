/* Unidad 2. Usos de las condicionales
   Autor: Miguel Angel Ortiz
   Fecha: 22/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/



#include <iostream>

using namespace std;

int main(){
    int dato=10, num;

    cout<<"Ingresa un numero: ";
    cin>>num;


    if(num==dato){
        cout<<"El numero que ingresaste es igual al dato"<<endl;
    }
    if(num != dato){
        cout<<"El numero que ingresaste es diferente del dato"<<endl;
    }
    if (num < dato){
        cout<<"El numero es menor al dato"<<endl;
    }
    if (num > dato){
        cout<<"EL numero es mayor que el dato"<<endl;
    }

    if (num <= dato){
        cout<<"El numero es menor o igual al dato"<<endl;
    }
    if (num >= dato){
        cout<<"EL numero es mayor o igual al dato"<<endl;
    }

    return 0;
}
