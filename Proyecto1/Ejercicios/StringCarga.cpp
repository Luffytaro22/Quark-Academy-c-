/*Realizar un programa que permita cargar una palabra por teclado. Modificar el string para agregar un guión entre cada letra de la palabra.*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string palabra;
    cout << "Ingrese una palabra: ";
    getline(cin,palabra);
    int length = palabra.length();
    cout << "Agregando un guión en cada letra de la palabra: ";
    for(int i = 0; i < length; i++){
        cout << palabra[i] << "-";
    }
    cin.get();cin.get();
    return 0;
}