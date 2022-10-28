/*
Author: Miguel Angel Ortiz
Date: 20/10/2022
Description: Muestra el alcance de las variables    
Unit: 3. Funciones
*/

#include <iostream>

using namespace std;

void getDatos();
void operacion();

float dato1, dato2, resultado;

int main(){

    getDatos();
    operacion();
    
    return 0;
}

void getDatos(){
    cout<<"Dame un numero: ";
    cin>> dato1;
    cout<<"Dame el otro numero: ";
    cin>> dato2;

}void operacion(){
    resultado=dato1*dato2;
}


