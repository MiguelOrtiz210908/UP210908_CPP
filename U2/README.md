# Exercise 1- Program that shows the user the corresponding tax rate based on their annual rent
## Section for tax selection (c++ code).
```c++
    //-----------Instanced Libraries--------------
    #include <iostream>
    using namespace std;

    int main(){

    //------------Declaration of variables---------
        int renta, descuento, num;
        cout<<"Ingrese la cantidad de renta mensual: ";
        cin>>renta;

    //-----------Conditionals and printing of results----------

    
        if(renta<10000){
    //------------Desc calculation operation-------
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
//------Printing results-----------
        cout<<"\n";
        cout<<"El descuento aplicado a tu total es del: "<<num<<"%";
        cout<<"\n";
        cout<< "El total es: $"<<descuento;
        cout<<"\n";
        
        return 0;
    }
```    
## Explanation of the code function.
1. Ask the user for his annual rent.
2. Check that the user entered a valid rent.   
2.1 If the user does not enter a valid rent, print a message that the user entered an incorrect number.  
2.2 If the user entered a valid rent, continue with the program.
3.  Check by several if's which tax rate.  
3.1 If the rent is less than $10, 000 it is 5%.  
3.2 If the rent is greater than or equal to $10,000 and less than $20,000 it is 15%.  
3.3 If the rent is greater or equal to $20,000 and less than $35,000, it is 20%.   
3.4 If the rent is greater or equal to $35,000 and less than $60,000 it is 30%.  
3.5 If the rent is greater than $60,000 it is 45%. 
4. Multiply the rent by the tax rate.
5. Print the tax rate and its equivalent in dollars. 

## Tests with all cases
### 1. Tax when: rent < $10,000
<div align="center">
<img src="UP210908_CPP/../../imagenes/imagen01.jpeg"/>
</div>

### 2. Tax when: rent >= $10,000 and < $20,000
<div align="center">
<img src="UP210908_CPP/../../imagenes/imagen02.jpeg"/>
</div>

### 3. Tax when: rent >= $20,000 and < $35,000
<div align="center">
<img src="UP210908_CPP/../../imagenes/imagen_03.jpeg"/>
</div>

### 4. Tax when: rent >= $35,000 and < $60,000
<div align="center">
<img src="UP210908_CPP/../../imagenes/imagen_04.jpeg"/>
</div>

### 5. Tax when: rent >= $60,000
<div align="center">
<img src="UP210908_CPP/../../imagenes/imagen_05.jpeg"/>
</div>
