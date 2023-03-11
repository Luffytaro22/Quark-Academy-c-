#include<iostream>
using namespace std;

int main(){
    float precio, cantidad, abono;
    cout << "Ingrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese la cantidad de artículos que llevara: ";
    cin >> cantidad;
    abono = precio * cantidad;
    cout << "La cantidad que debe pagar es de: ";
    cout << abono;
    cin.get();
    cin.get();
    return 0;
}