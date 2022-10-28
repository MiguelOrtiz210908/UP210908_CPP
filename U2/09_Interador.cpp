


#include <iostream>
#include <cmath>

using namespace std;

float resolverFuncion(float valor){
    return (pow(valor, 2) - (3*valor) - 10);

}
int lineas(){
    for(int lin=0;lin<112;lin++){
        cout<<"-";
    }
    return 0;
}

int main(){

    int contador=1, resultado=0;
    float a, b, c, ya, yb, yc, error=0.01;

    cout<<"Dame el valor de a: ";
    cin>>a;
    cout<<"Dame el valor de b: ";
    cin>>b;

    lineas();
    cout<<"\n";
    cout<<"|\t i \t| a \t\t| b \t\t| c \t\t| f(a) \t\t| f(b) \t\t| f(c) \t\t|"<<endl;
    lineas();


    do{
        c=(a+b)/2;
        ya=resolverFuncion(a);
        yb=resolverFuncion(b);
        yc=resolverFuncion(c);
        contador++;

        if ((ya * yc) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        if (a == b)
        {
            resultado = 0;
            break;
        }

    
    }while(abs(yc)>=0);

    if (resultado != 0)
    {
        cout << "La raiz es:" << c;
        cout << "\n";
    }
    else
    {
        cout << "No hay ninguna raiz en este rango"<<endl;
    }
    return 0;
}


