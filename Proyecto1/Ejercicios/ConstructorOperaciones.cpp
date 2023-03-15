/*Implementar la clase Operaciones. Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular su suma, resta, multiplicación y división. imprimir dichos resultados.*/

#include<iostream>
#include<math.h>

using namespace std;

class Operaciones{
    private:
        float num1, num2;
    public: 
        Operaciones(int n1, int n2);
        void suma();
        void resta();
        void mult();
        void div();
};

Operaciones::Operaciones(int n1, int n2){
    num1 = n1;
    num2 = n2;
    cout << "Los numeros son " << num1 << " y " << num2 << ".\n";
}

void Operaciones::suma(){
    cout << "La suma de los numeros es de " << num1 + num2 << ".\n";
}

void Operaciones::resta(){
    cout << "La resta de los numeros es de " << abs(num1 - num2) << ".\n";
}

void Operaciones::mult(){
    cout << "La multiplicacion de los numeros es de " << num1 * num2 << ".\n";
}

void Operaciones::div(){
    cout << "La division del primero por el segundo es de " << num1/num2 << ".\n";
}

int main(){
    Operaciones num(40,68);
    num.suma();
    num.resta();
    num.mult();
    num.div();
    cin.get();
    cin.get();
    return 0;
}
