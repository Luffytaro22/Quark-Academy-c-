/*Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero de hasta tres cifras: ";
    cin >> n;
    if(n < 10){
        cout << "El numero tiene una cifra";
    }else{
        if(n < 100){
            cout << "El numero tiene dos cifras";
        }else if(n < 1000){
            cout << "El numero tiene tres cifras";
        }else{
            cout << "El numero ingresado es incorrecto";
        }
    }
    cin.get();
    cin.get();
    return 0;
}