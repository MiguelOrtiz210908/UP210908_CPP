/*
Author: Miguel Angel Ortiz
Date: 24/10/2022
Description: Programa que desgloza cambio de una cantidad ingresada por el usuario
Unit: 
*/

#include <iostream>

using namespace std;

int quinientos = 0, docientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos=0, uno=0;

void obtenerCambio(int num){
    int cantidad;

    cantidad=num/500;
    quinientos=cantidad;
    num%=500;
    cantidad=num/200;
    docientos=cantidad;
    num%=200;
    cantidad=num/100;
    cien=cantidad;
    num%=100;
    cantidad=num/50;
    cincuenta=cantidad;
    num%=50;
    cantidad=num/20;
    veinte=cantidad; 
    num%=20;
    cantidad=num/10;
    diez=cantidad;
    num%=10;
    cantidad=num/5;
    cinco=cantidad;
    num%=5;
    cantidad=num/2;
    dos=cantidad;
    num%=2;
    cantidad=num/1;
    uno=cantidad;

    
}
void imprimirCambio(string){
    cout<<"Los billetes son: "<<endl;
    cout<<"Billetes de 500: "<<quinientos<<endl;
    cout<<"Billetes de 200: "<<docientos<<endl;
    cout<<"Billetes de 100: "<<cien<<endl;
    cout<<"Billetes de 50: "<<cincuenta<<endl;
    cout<<"Billetes de 20: "<<veinte<<endl;
    cout<<"Monedas:"<<endl;
    cout<<"Monedas de 10: "<<diez<<endl;
    cout<<"Monedas de 5: "<<cinco<<endl;
    cout<<"Monedas de 2: "<<dos<<endl;
    cout<<"Monedas de 1: "<<uno<<endl;

}



int main(){
    int monto;

    cout<<"Ingrese el monto: ";
    cin>>monto;
    
    obtenerCambio(monto);
    imprimirCambio("Total");
    
    return 0;
}


