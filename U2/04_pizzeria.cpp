/* Unidad 2. Usos de las condicionales
   Autor: Miguel Angel Ortiz
   Fecha: 28/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include <iostream>

using namespace std;

int main(){

    int opcionPizza, opcionIngrediente;
    char muestra[40];

    cout<<"Bienvenido a Pizza Hot\n";
    cout<<"Selecciona la pizza que deseas: \n Opcion | Pizza \n---------------\n  1     | Vegetariana\n  2     | No vegetariana\nOpcion: ";
    cin>>opcionPizza;

    if(opcionPizza == 1){
        cout<<"Selecciona el ingrediente de tu pizza: ";
        cout<<"\n1. Pimiento\n2. Tofu\nOpcion: ";
        cin>>opcionIngrediente;
        if(opcionIngrediente==1){
            cout<<"Tu pizza es Vegetariana con Pimiento";
        }
        else if(opcionIngrediente==2){
            cout<<"Tu pizza es Vegetariana con Tofu";
        }

    }
    else if(opcionPizza == 2){
        cout<<"Selecciona el ingrediente de tu pizza: ";
        cout<<"\n1. Peperoni\n2. Jamon\n3. Salmon\nOpcion: ";
        cin>>opcionIngrediente;
        if(opcionIngrediente==1){
            cout<<"Tu pizza es no Vegetariana con Pepperoni";
        }
        else if(opcionIngrediente==2){
            cout<<"Tu pizza es no Vegetariana con Jamon";
        }
        else if(opcionIngrediente==3){
            cout<<"Tu pizza es no Vegetariana con Salmon";
        }
        cout<<"\n";
        cout<<"\n";
    }



}