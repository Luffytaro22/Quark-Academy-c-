#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dado {
    int valor;
public:
    void tirar();
    void imprimir();
    int retornarValor();
};

class JuegoDeDados {
    Dado dado1, dado2, dado3;
public:
    void jugar();
};

void Dado::tirar()
{
    valor = rand() % 6 + 1;
}

void Dado::imprimir()
{
    cout << "Valor del Dado:" << valor << "\n";
}

int Dado::retornarValor()
{
    return valor;
}


void JuegoDeDados::jugar() 
{
    dado1.tirar();
    dado1.imprimir();
    dado2.tirar();
    dado2.imprimir();
    dado3.tirar();
    dado3.imprimir();
    if (dado1.retornarValor() == dado2.retornarValor() &&
        dado1.retornarValor() == dado3.retornarValor()) 
    {
        cout<<"Gano";
    }
    else 
    {
        cout<<"Perdio";        
    }
}

int main()
{
    srand(time(NULL));
    JuegoDeDados juego1;
    juego1.jugar();
    cin.get();
    cin.get();
    return 0;
}