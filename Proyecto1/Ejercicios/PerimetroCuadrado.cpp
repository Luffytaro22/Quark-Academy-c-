#include<iostream>
using namespace std;

int main(){
    int lado, perimetro;
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    perimetro = lado * 4;
    cout << "El perimetro del cuadrado es de: ";
    cout << perimetro;
    cin.get();
    cin.get();
    return 0;
}