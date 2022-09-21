/* Unidad 1. Entrada de datos
   Autor: Miguel Angel Ortiz
   Fecha: 01/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
   Ultima modificacion: 21/09/2022
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    
    int entero;
    float flotante;
    double grande;
    char caracter;
    
    cout << "Este programa muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;
    
    cout << "============" << endl;

    cout<< "Ingresa un dato de tipo flotante";
    cin>> flotante;
    cout<< "El dato ingresado es: " << flotante <<endl;

    cout << "============" << endl;

    cout<< "Ingresa un dato de tipo caracter";
    cin>> caracter;
    cout<< "El dato ingresado es: " << caracter<<endl;

    cout<< "Ingresa un dato de tipo grande jssj";
    cin>> grande;
    cout<< "El dato ingresado es: " << flotante <<endl;

    return 0;
}