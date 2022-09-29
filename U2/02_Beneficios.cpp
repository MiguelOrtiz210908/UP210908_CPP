/* Unidad 2. Usos de las condicionales
   Autor: Miguel Angel Ortiz
   Fecha: 26/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include <iostream>

using namespace std;

int main(){

    double puntuacion, total, puntuacion1, bandera=1;

    cout<<"Ingresa el procentaje de tu puntuacion: ";
    cin>>puntuacion;

    puntuacion1= puntuacion/100;
    total= puntuacion1*2400;

    if(puntuacion1==0.0){
        cout<<"Calificacion: Inaceptable";
      
    }
    else if(puntuacion1==0.4){
        cout<<"Calificacion: Aceptable";
    
    }
    else if(puntuacion1>=0.6){
        cout<<"Calificacion: Merito";
        
       
    }
    else{
        cout<<"Esta calificacion no esta aceptada por el sistema";
        cout<<"\n";
        bandera=0;
        
    }
    cout<<"\n";

    if(bandera==1){
        cout<<"Tu bono es igual a: $"<<total;
        cout<<"\n";
        cout<<"Con un porcentaje del: "<<puntuacion<<"%"; 
        cout<<"\n";  
    }

    
}

