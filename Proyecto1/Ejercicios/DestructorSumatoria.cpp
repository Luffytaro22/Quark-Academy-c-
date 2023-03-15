/*Confeccionar una clase llamada Sumatoria que solicite la carga de valores enteros por teclado. Finalizar la carga de valores al ingresar el cero. Mostrar en el destructor la suma de los valores ingresados.*/

#include<iostream>
using namespace std;

class Sumatoria{
    private:
        int num,suma;
    public:
        Sumatoria();
        ~Sumatoria();
};

Sumatoria::Sumatoria(){
    suma = 0;
    do{
        cout << "Ingrese un numero entero. Presione 0 para finalizar.\n";
        cin >> num;
        suma = suma + num;
    }while(num != 0);
}

Sumatoria::~Sumatoria(){
    cout << "La suma de los valores ingresados es de " << suma << ".\n";
    cin.get();
    cin.get();
}

int main(){
    Sumatoria n;
    return 0;
}