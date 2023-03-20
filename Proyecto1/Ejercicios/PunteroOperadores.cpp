/*Plantear una clase para administrar un vector de 5 enteros. Definir además del método para cargar el vector un método que imprima las componentes empleando un puntero que avance por todas las direcciones de las componentes utilizando el operador ++.*/

#include<iostream>

using namespace std;

class Vector{
        int vec[5];
        int *p1;
    public:
        Vector();
        void imprimir();
};

Vector::Vector(){
    for(int i = 0; i < 5; i++){
        cout << "Ingrese la componente " << i+1 << " del vector: ";
        cin >> vec[i];
        cin.get();
    }
}

void Vector::imprimir(){
    p1 = &vec[0];
    cout << "El vector es igual a: \n";
    while(p1 != &vec[5]){
        cout << *p1 << " - ";
        p1++;
    }
}

int main(){
    Vector v1;
    v1.imprimir();
    cin.get();
    cin.get();
    return 0;
}