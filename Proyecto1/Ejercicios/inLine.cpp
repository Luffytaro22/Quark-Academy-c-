/*Plantear una clase que administre un vector de 5 enteros. Cargar los elementos por teclado, imprimirlos y retornar la suma de la primera y última componente (este último método implementarlo inline)*/

#include<iostream>
using namespace std;

class Vector{
        int vec[5];
    public:
        Vector();
        int suma() { return vec[0] + vec[4];};
        void imprimir();
};

Vector::Vector(){
    cout << "Ingrese los elementos del vector: \n";
    for(int i = 0; i < 5; i++){
        cin >> vec[i];
    }
}

void Vector::imprimir(){
    cout << "El vector es: \n";
    for(int i = 0; i < 5; i++){
        cout << vec[i] << "-";
    }
}

int main(){
    Vector v1;
    v1.imprimir();
    cout << "\n La suma de la primera y la ultima componente es de " << v1.suma() << ".\n";
    cin.get();
    cin.get();
    return 0;
}