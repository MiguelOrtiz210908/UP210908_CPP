/* Unidad 3. 
   Autor: Miguel Angel Ortiz
   Fecha: 05/10/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include<iostream>

using namespace std;

int main(){
    int num;
    string  resultado;

    do{
        cout<<"Ingrese el numero a convertir: ";
        cin>>num;

        if(num>0){
            cout<<"Mayor a cero"<<endl;
            while(num!=0){
                if(num%2==0){
                    resultado='0'+resultado;
                }
                else{
                    resultado = '1' + resultado;
                }

                num/=2;
        
        }
        }
        else if(num==0){
            resultado='0';
        }
        else{
            cout<<"Menor a cero"<<endl;
        }
    }while(num<0);
    cout<<"El resultado a binario es: "<<resultado<<endl;
}