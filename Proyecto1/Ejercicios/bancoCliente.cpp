#include<iostream>
#include<string.h>
using namespace std;

class Cliente {
	char nombre[40];
	float monto;
public:
	Cliente(const char nom[40]);
	void depositar(int m);
	void extraer(int m);
	float retornarMonto();
	void imprimir();
};


class Banco {
	Cliente cliente1, cliente2, cliente3;
public:
	Banco();
	void operar();
	void depositiosTotales();
};


Cliente::Cliente(const char nom[40])
{
	strcpy_s(nombre, nom);
	monto = 0;
}

void Cliente::depositar(int m)
{
	monto = monto + m;
}

void Cliente::extraer(int m)
{
	monto = monto - m;
}

float Cliente::retornarMonto()
{
	return monto;
}

void Cliente::imprimir()
{
	cout << "Nombre:" << nombre << "  Monto:" << monto << "\n\n";
}


Banco::Banco(): cliente1("juan"), cliente2("pedro"), cliente3("luis")
{
}

void Banco::operar()
{
	cliente1.depositar(100);
	cliente2.depositar(150);
	cliente3.depositar(200);
	cliente3.extraer(150);
}

void Banco::depositiosTotales()
{
	float t = cliente1.retornarMonto() + cliente2.retornarMonto() + cliente3.retornarMonto();
	cout << "El total de dinero en el banco es:" << t << "\n\n";
	cliente1.imprimir();
	cliente2.imprimir();
	cliente3.imprimir();
}


int main()
{
	Banco banco1;
	banco1.operar();
	banco1.depositiosTotales();
    cin.get();
    cin.get();
	return 0;
}