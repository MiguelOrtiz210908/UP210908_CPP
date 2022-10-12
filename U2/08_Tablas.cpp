/* Unidad 3. 
   Autor: Miguel Angel Ortiz
   Fecha: 05/10/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include<iostream>

using namespace std;

int main(){
    int numero, lon, tot;

    cout<<"Ingresa el numero de la tabla: ";
    cin>>numero;
    cout<<"Ingresa la longitud de la tabla: ";
    cin>>lon;

    cout<<"|";
    for(int i=0; i<=lon; i++){
        for(int j=0; j<=38; j++){
            cout<<"-";
        }
        cout<<"|"<<endl;
        tot=numero*i;
        cout<<"|"<<""<<i<<"\tX\t"<<numero<<"\t=\t"<<tot<<"\t|"<<endl<<"|";
    }
    cout<<"---------------------------------------|"<<endl;

}