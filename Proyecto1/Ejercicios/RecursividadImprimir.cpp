/*Implementar un método recursivo que imprima en forma descendente de 5 a 1 de uno en uno.*/

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
        cout << x << "-";
        imprimir(x - 1);
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