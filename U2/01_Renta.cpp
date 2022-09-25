
/* Unidad 2. Usos de las condicionales
   Autor: Miguel Angel Ortiz
   Fecha: 22/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/


    //-----------Libreria--------------
    #include <iostream>
    using namespace std;

    int main(){

    //----------Declaracion de variables---------
        int renta, descuento, num;
        cout<<"Ingrese la cantidad de renta mensual: ";
        cin>>renta;

    //---------Condicionales e impresion de resultados----------

    
        if(renta<10000){
            //-----Operacion del calculo de descuento-------
            descuento= (renta/100)*5;
        num=5;
            
        }

        if(renta>=10000 && renta<20000){
            descuento= (renta/100)*15;
            num=15;
        }

        if(renta>=20000 && renta<35000){
            descuento= (renta/100)*20;
            num=20;
        }

        if(renta>=35000 && renta<60000){
            descuento= (renta/100)*30;
            num=30;
        }

        if(renta>=60000){
            descuento= (renta/100)*45;
            num=45;
        }

        cout<<"\n";
        cout<<"El descuento aplicado a tu total es del: "<<num<<"%";
        cout<<"\n";
        cout<< "El total es: $"<<descuento;
        cout<<"\n";
        
        return 0;
    }