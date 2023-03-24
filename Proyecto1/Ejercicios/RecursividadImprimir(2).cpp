/*Imprimir los números de 1 a 5 en pantalla utilizando recursividad.*/

#include <iostream>

using namespace std;

class Recursividad {
public:
    void imprimir(int x);
};

void Recursividad::imprimir(int x)
{
    if (x > 0)
    {
        imprimir(x - 1);
        cout << x << "-";
    }
}

int main()
{
    Recursividad *recu = new Recursividad();
    recu->imprimir(5);
    delete recu;
    cin.get();
    cin.get();
    return 0;
}