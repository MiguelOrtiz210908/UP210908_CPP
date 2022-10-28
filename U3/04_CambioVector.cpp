/*
Author: Miguel Angel Ortiz
Date: 24/10/2022
Description: Programa que desgloza cambio de una cantidad ingresada por el usuario
Unit: 
*/

#include <iostream>

using namespace std;

int denominaciones[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};
int cantidadBilletes[9]={0};
int residuo=0;

void obtenerCambio(int num){
    for(int denominacion=0 ; denominacion < 9 ; denominacion++){
        residuo=(denominacion==0)?num:residuo;
        cantidadBilletes[denominacion]=residuo/denominaciones[denominacion];

        residuo=residuo%denominaciones[denominacion];
    }    
}
void imprimirCambio(string){
    string tipo;
    for(int cambio=0; cambio<9; cambio++){
        tipo=(cambio<5)?"Billetes ":"Monedas ";
        cout<<tipo<<"de "<<denominaciones[cambio]<<": "<<cantidadBilletes[cambio]<<endl;

    }
}
int main(){
    int monto;

    cout<<"Ingrese el monto: ";
    cin>>monto;
    
    obtenerCambio(monto);
    imprimirCambio("Total");
    
    return 0;
}