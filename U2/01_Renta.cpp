/*
Date: 21/09/2022
Author:Miguel Angel Ortiz
Email: up210908@alumnos.upa.edu.mx
Description: Mi primer programa en c++
*/

//-----------Libreria--------------
#include <iostream>
using namespace std;

int main(){

//----------Declaracion de variables---------
    int renta, descuento;

//----------Ingreso del dato principal---------
    cout<<"Ingresa tu monto mensual: ";
    cin>>renta;

//---------Condicionales e impresion de resultados----------
    if(renta<10000){
        //-----Operacion del calculo de descuento-------
        descuento= (renta/100)*5;
        cout<<"El descuento aplicado a tu total es del 5%";
        cout<<"El total es:"<<descuento; 
    }

    if(renta>=10000 && renta<20000){
        descuento= (renta/100)*15;
        cout<<"El descuento aplicado a tu total es del 15%";
        cout<<"El total es:"<<descuento; 
    }

    if(renta>=20000 && renta<35000){
        descuento= (renta/100)*20;
        cout<<"El descuento aplicado a tu total es del 20%";
        cout<<"El total es:"<<descuento; 
    }

    if(renta>=35000 && renta<60000){
        descuento= (renta/100)*30;
        cout<<"El descuento aplicado a tu total es del 30%";
        cout<<"El total es:"<<descuento; 
    }

    if(renta>=60000){
        descuento= (renta/100)*45;
        cout<<"El descuento aplicado a tu total es del 45%";
        cout<<"El total es:"<<descuento; 
    }
}