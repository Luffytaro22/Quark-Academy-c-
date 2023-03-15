/*Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. En el constructor cargar los atributos y luego en otro método imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

#include<iostream>

using namespace std;

class Empleado{
    private:
        char nombre[40];
        float sueldo;
    public:
        Empleado();
        void imprimir();
        void impuestos();
};

Empleado::Empleado(){
    cout << "Ingrese su nombre: ";
    cin.getline(nombre,40);
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
}

void Empleado::imprimir(){
    cout << "\n";
    cout << "Su nombre es " << nombre << " y su sueldo es " << sueldo << ".\n";
}

void Empleado::impuestos(){
    if(sueldo > 3000){
        cout << "Debe pagar impuestos :) \n";
    }else{
        cout << "No debe pagar impuestos :( \n";
    }
}

int main(){
    Empleado empleado1;
    empleado1.imprimir();
    empleado1.impuestos();
    cin.get();
    cin.get();
    return 0;
}