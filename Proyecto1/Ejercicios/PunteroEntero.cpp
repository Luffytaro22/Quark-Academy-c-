/*Definir tres variables enteras e inicializarlas con los valores 5,10 y 15. Luego definir una variable puntero a entero. Hacer que dicha variable apunte sucesivamente a las distintas variables definidas previamente e imprimir su contenido.*/

#include<iostream>
using namespace std;

int main(){
    int n1 = 5;
    int n2 = 10;
    int n3 = 15;
    int *pe;
    pe = &n1;
    cout << *pe << "\n";
    pe = &n2;
    cout << *pe << "\n";
    pe = &n3;
    cout << *pe << "\n";
    cin.get();
    cin.get();
    return 0;
}