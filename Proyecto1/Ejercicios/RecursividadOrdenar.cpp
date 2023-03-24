/*Implementar un método recursivo para ordenar los elementos de un vector.*/

#include<iostream>

using namespace std;

class Recursividad {
    int vec[5];
    void ordenar(int cant);
public:
    void cargar();
    void ordenar();    
    void imprimir();
};

void Recursividad::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout <<"Ingrese elemento:";
        cin >> vec[f];
    }
}

void Recursividad::ordenar(int cant)
{
    if (cant > 1) 
    {
        for (int f = 0; f < cant - 1; f++)
        {
            if (vec[f] > vec[f + 1])
            {
                int aux = vec[f];
                vec[f] = vec[f + 1];
                vec[f + 1] = aux;
            }
        }
        ordenar(cant - 1);
    }
}

void Recursividad::ordenar()
{
    ordenar(5);
}

void Recursividad::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << "-";
    }
}


int main()
{
    Recursividad *recu = new Recursividad();
    recu->cargar();
    recu->ordenar();
    recu->imprimir();
    delete recu;
    cin.get();
    cin.get();
    return 0;
}