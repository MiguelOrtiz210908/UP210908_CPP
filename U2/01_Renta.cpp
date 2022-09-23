/* Unidad 2. Usos de las condicionales
   Autor: Miguel Angel Ortiz
   Fecha: 22/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/


#include <iostream>

using namespace std;

int main(){

    int renta, descuento, TotalaPagar;

    cout<<"Ingrese la cantidad de renta mensual: ";
    cin>>renta;

    if(renta < 10000){
        cout<<"Impositivo correspondiente: 5%";
    }


//    if(renta)

    return 0;
}