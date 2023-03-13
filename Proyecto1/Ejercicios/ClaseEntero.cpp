/*Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)*/
#include<iostream>
using namespace std;

class Entero{
    private:
        void valor(int n);
    public:
        void enteros();
};

void Entero::valor(int n){
    for(int i = 1; i <= n; i++){
        cout << i;
        cout << "\n";
    }
}

void Entero::enteros(){
    int num;
    cout << "Ingrese un valor entero: ";
    cin >> num;
    valor(num);
}

int main(){
    Entero n1;
    n1.enteros();
    cin.get();
    cin.get();
    return 0;
}