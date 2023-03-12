/*Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.*/

#include<iostream>

using namespace std;

int main(){
    int n, suma,i;
    suma = 0;
    for(i = 1; i <= 10; i++){
        cout << "Ingrese un numero: ";
        cin >> n;
        if(i >= 6){
            suma = suma + n;
        }
    }
    cout << "La suma de los ultimos cinco valores ingresados es de " << suma << ".";
    cin.get();
    cin.get();
    return 0;
}