/* Unidad 3. 
   Autor: Miguel Angel Ortiz
   Fecha: 03/10/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include <iostream>

using namespace std;



int main(){
    //----Declaracion de variables----
    float temperatura=0,promedio=0,temperaturaAcum=0, mayor, menor, comparadormax;
    int cont=1, comparadormin;

//----inicio del ciclo----
    do{
        cont++;
        cout<<"Ingrese la temperatura:";
        cin>>temperatura;
        temperaturaAcum+=temperatura;
        menor=temperatura;
        mayor=temperatura;
        //----Comparador del numero menor----

        if(menor<=comparadormin){
            comparadormin=menor;
        }
        //----Comparador del numero mayor----
        if(mayor>comparadormax){
            comparadormax=mayor;
        }

//----Fin del ciclo----
    }while(cont<=6);
//----Operacion del promedio----
    promedio=temperaturaAcum/6;
//----Impresion de resultados
    cout<<"\nEl promedio es igual a:"<<promedio;
    cout<<"\nLa temperatura menor es:"<<comparadormin;
    cout<<"\nLa temperatura mayor es:"<<comparadormax;
    cout<<"\n";
}
