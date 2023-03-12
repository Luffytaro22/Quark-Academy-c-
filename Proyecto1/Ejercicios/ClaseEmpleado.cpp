/*Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

#include<iostream>
using namespace std;

class Empleado{
    private:
        char nombre[20];
        float sueldo;
    public:
        void inicializar();
        void imprimir();
        void impuestos();
};

void Empleado::inicializar(){
    cout << "Ingrese su nombre: ";
    cin.getline(nombre,20);
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
}

void Empleado::imprimir(){
    cout << "Su nombre es " << nombre << " y su sueldo es " << sueldo << ".\n";
}

void Empleado::impuestos(){
    if(sueldo > 3000){
        cout << "Empleado debe pagar impuestos.\n";
    }else{
        cout << "Empleado no debe pagar impuestos. Es pobre XD \n";
    }
}

int main(){
    Empleado empleado1;
    empleado1.inicializar();
    empleado1.imprimir();
    empleado1.impuestos();
    cin.get();
    cin.get();
    return 0;
}