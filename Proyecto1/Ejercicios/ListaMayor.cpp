/*Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.*/

#include<iostream>

using namespace std;

int main(){
    int n1,n2,suma1,suma2,valor1,valor2;
    n1= 1;
    n2 = 1;
    suma1 = 0;
    suma2 = 0;
    cout << "Ingrese los valores de la lista 1: \n";
    while(n1 <= 15){
        cout << "\t";
        cin >> valor1;
        cout << "\n";
        n1 += 1;
        suma1 = suma1 + valor1;
    }
    cout << "Ingrese los valores de la lista 2: \n";
    while(n2 <= 15){
        cout << "\t";
        cin >> valor2;
        cout << "\n";
        n2 += 1;
        suma2 = suma2 + valor2;
    }
    if(suma1 > suma2){
        cout << "Lista 1 mayor.";
    }else if(suma1 == suma2){
         cout << "Listas iguales.";
    }
    else{
        cout << "Lista 2 mayor";
    }
    cin.get();
    cin.get();
    return 0;
}