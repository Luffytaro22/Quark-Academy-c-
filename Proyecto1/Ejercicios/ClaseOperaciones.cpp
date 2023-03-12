/*Implementar la clase operaciones. Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.*/

#include<iostream>
#include<cmath>  //Para poder usar valor absoluto.
using namespace std;

class Operaciones{
    private:
        float n1,n2;
    public:
        void inicializar();
        void suma();
        void resta();
        void multi();
        void division();
};

void Operaciones::inicializar(){
    cout << "Introduzca un numero: ";
    cin >> n1;
    cout << "Introduzca otro numero: ";
    cin >> n2;
}

void Operaciones::suma(){
    cout << "La suma es de " << n1 + n2 << ".\n";
}

void Operaciones::resta(){
    cout << "La resta es de " << abs(n1 - n2) << ".\n";
}

void Operaciones::multi(){
    cout << "La multiplicacion es de " << n1 * n2 << ".\n";
}

void Operaciones::division(){
    cout << "La division del primero respecto al segundo es de " << n1/n2 << ".\n";
}

int main(){
    Operaciones op;
    op.inicializar();
    op.suma();
    op.resta();
    op.multi();
    op.division();
    cin.get();
    cin.get();
    return 0;
}
