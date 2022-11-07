/*
Author: Miguel Angel Ortiz
Date: 28/10/2022
Description: ---
Unit: 3
*/

#include <iostream>

using namespace std;

int conjunto[5][5];

int main(){

    for(int row=0 ; row<5 ; row++){
        for(int col=0 ; col<5; col++){
            cout<<"Valor: ";
            cin>>conjunto[row][col];
        }
    }

    for(int row=0 ; row<5 ; row++){
        for(int col=0 ; col<5; col++){
            cout<<conjunto[row][col]<<"\t";
        }
        cout<<endl;
        cout<<endl;
    }
   
    
    return 0;
}