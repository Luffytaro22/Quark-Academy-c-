/*Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.*/

#include<iostream>

using namespace std;

int main(){
    int n,suma;
    suma = 0;
    do{
        cout << "Ingrese un valor \n";
        cin >> n;
        suma = suma + n;
    }while(n != 9999);
    if(suma == 0){
            cout << "La suma es cero.\n";
        }else if(suma < 0){
            cout << "La suma es menor a cero.\n";
        }else{
            cout << "La suma es mayor a cero.\n";
        }
    cin.get();
    cin.get();
    return 0;
}