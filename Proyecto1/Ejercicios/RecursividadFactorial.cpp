/*Otro problema típico que se presenta para analizar la recursividad es el obtener el factorial de un número.
Recordar que el factorial de un número es el resultado que se obtiene de multiplicar dicho número por el anterior y así sucesivamente hasta llegar a uno.*/

#include<iostream>

using namespace std;

class Recursividad {
public:
    int factorial(int fact);
};

int Recursividad::factorial(int fact)
{
    if (fact>0) {
        int valor = fact * factorial(fact - 1);
        return valor;
    }
    else
        return 1;
}


int main()
{
    Recursividad *recu = new Recursividad();
    cout << "El factorial de 4 es " << recu->factorial(4);
    delete recu;
    cin.get();
    cin.get();
    return 0;
}