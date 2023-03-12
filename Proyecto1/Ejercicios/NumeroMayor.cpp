/*Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2,suma,diferencia;
    float producto, division;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    if(num1 > num2){
        suma = num1 + num2;
        diferencia = num1 - num2;
        cout << "La suma es de: ";
        cout << suma;
        cout << "\n";
        cout << "La diferencia es de: ";
        cout << diferencia;
    }else{
        producto = num1 * num2;
        division = num2/num1;
        cout << "El producto de los numeros es de: ";
        cout << producto;
        cout << "\n";
        cout << "La division del primero respecto al segundo es de: ";
        cout << division;
    }
        cin.get();
        cin.get();
        return 0;
}