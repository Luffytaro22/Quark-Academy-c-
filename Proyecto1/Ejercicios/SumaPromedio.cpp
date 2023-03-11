#include<iostream>

using namespace std;

int main(){
    int num1, num2, num3, num4, suma;
    float promedio;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "Ingrese el cuarto numero: ";
    cin >> num4;
    suma = num1 + num2 + num3 + num4;
    promedio = suma/4;
    cout << "La suma de los numeros es de: ";
    cout << suma;
    cout << "\n";
    cout << "El promedio de los numeros es de: ";
    cout << promedio;
    cin.get();
    cin.get();
    return 0;
}