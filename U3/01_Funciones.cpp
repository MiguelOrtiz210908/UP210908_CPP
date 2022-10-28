/*
Author: Miguel Angel Ortiz
Date: 20/10/2022
Description: Muestra la creacion y manejo de funciones
Unit: 3. Funciones
*/

#include <iostream>

using namespace std;

int getMaxVal(int num1, int num2);

int main(){
    int num1, num2, valorMaximo;
    cout<<"Dame un numero: ";
    cin>>num1;
    cout<<"Dame otro numero: ";
    cin>>num2;

    valorMaximo= getMaxVal(num1, num2);

    cout<<"El valor maximo es: "<<valorMaximo<<endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    return (num1>num2)?num1:num2;
}   