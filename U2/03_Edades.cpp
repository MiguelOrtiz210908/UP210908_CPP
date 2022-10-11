/* Unidad 2. Usos de las condicionales
   Autor: Miguel Angel Ortiz
   Fecha: 28/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/


#include <iostream>

using namespace std;

int main(){

//-----Variable declaration-----
    int edad, pago;

//-----Data entry-----

    cout<<"Bienvenido a Game Zone\n";
    cout<<"Ingresa tu edad: ";
    cin>>edad;
    cout<<"\n";

//-----Procces-----    

    if(edad>=0 && edad<4){
        pago=0;
        cout<<"Tu entrada es gratuita"<<endl;
    }
    else if(edad>=4 && edad<=18){
        pago=5;
    }
    else if(edad>18){
        pago=10;
    }
    else{
        cout<<"El valor ingresado es erroneo"<<endl;
    }

    cout<<"Tu entrada tendra un valor de $"<<pago<<".00";
    cout<<"\n";
}