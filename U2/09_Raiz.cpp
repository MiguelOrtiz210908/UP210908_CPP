/* Unidad 3. 
   Autor: Miguel Angel Ortiz
   Fecha: 05/10/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/


#include<iostream>
#include<cmath>

using namespace std;

float ResolverEcuacion(float valor){
    return pow(valor, 2) + 3*(valor)+8;
}

int main(){

    float a;
    float b;
    float c=(a+b)/2;
    float ya= ResolverEcuacion(a);
    float yb= ResolverEcuacion(b);
    float yc= ResolverEcuacion(c);

    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"Ingresa el valor de b: ";
    cin>>b;
    c=(a+b)/2;
    yc= ResolverEcuacion(c);
    cout<<yc;

    while(yc>=0.001 || yc<=-0.001){
        

    }

}