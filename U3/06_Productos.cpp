/* Unidad 3. 
   Autor: Miguel Angel Ortiz
   Fecha: 05/10/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include<iostream>

using namespace std;

int main(){
    float CantProductos=0;
    float precio=0, suma=0, total=0;
    do{
        cout<<"Digite la cantidad de productos: ";
        cin>>CantProductos;

        if(CantProductos==0){
            break;
        }

        cout<<"Digite el precio del producto: ";
        cin>>precio;
        suma=CantProductos*precio;
        total+=suma;

    }while(CantProductos !=0);
    cout<<"\nFinalizando tu factura...";
    cout<<"\nEL total de tu factura es de: "<<total<<endl;
}