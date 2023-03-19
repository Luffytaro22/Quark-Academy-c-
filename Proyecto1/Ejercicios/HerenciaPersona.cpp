/*Confeccionar una clase Persona que tenga como atributos el nombre y la edad. Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.
Plantear una segunda clase Empleado que herede de la clase Persona. Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.
Definir un objeto de la clase Persona y llamar a sus métodos. También crear un objeto de la clase Empleado y llamar a sus métodos.

*/
#include<iostream>
#include<string.h>

using namespace std;

class Persona{
    protected:
        int edad;
        char nombre[50];
    public:
        void carga();
        void imprimir();
};

class Empleado: public Persona{
    private:
        int sueldo;
    public:
        void cargarSueldo();
        void imprimirSueldo();
};

void Persona::carga(){
    cout << "Ingrese su nombre: ";
    cin.getline(nombre,50);
    cout << "Ingrese su edad: ";
    cin >> edad;
    cin.get();
}

void Persona::imprimir(){
    cout << "Su nombre es " << nombre << " y su edad es de " << edad << ".\n";
}

void Empleado::cargarSueldo(){
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
    cout << "\n";
}

void Empleado::imprimirSueldo(){
    cout << "Su sueldo es de " << sueldo << ".\n";
}

int main(){
    Persona juan;
    juan.carga();
    juan.imprimir();

    Empleado jose;
    jose.carga();
    jose.cargarSueldo();
    jose.imprimir();
    jose.imprimirSueldo(); 
    cin.get();
    cin.get();
    return 0;
}