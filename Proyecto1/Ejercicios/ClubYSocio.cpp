/*Plantear una clase Club y otra clase Socio.
La clase Socio debe tener los siguientes atributos privados: nombre y la antigüedad en el club (en años). En el constructor pedir la carga del nombre y su antigüedad. La clase Club debe tener como atributos 3 objetos de la clase Socio. Definir una responsabilidad para imprimir el nombre del socio con mayor antigüedad en el club.*/

#include<iostream>

using namespace std;



class Socio{
        char nombre[50];
        int antiguedad;
    public: 
        Socio();
        void imprimir();
        int retornarAntiguedad();
};

class Club{
         Socio socio1, socio2, socio3;
    public:
       
        void mayorAntiguedad();
};

Socio::Socio(){
    cout << "Ingrese su nombre: ";
    cin.getline(nombre,50);
    cout << "Ingrese su antiguedad: ";
    cin >> antiguedad;
    cin.get();
}

void Socio::imprimir(){
    cout << "Su nombre es " << nombre << " y su antiguedad es " << antiguedad << ".\n";
}

int Socio::retornarAntiguedad(){
    return antiguedad;
}

void Club::mayorAntiguedad(){
    cout << "La persona con la mayor antiguedad es \n"; 
    if(socio1.retornarAntiguedad() > socio2.retornarAntiguedad() && socio1.retornarAntiguedad() > socio3.retornarAntiguedad()){
        socio1.imprimir();
    }else if(socio2.retornarAntiguedad() > socio1.retornarAntiguedad() && socio2.retornarAntiguedad() > socio3.retornarAntiguedad()){
        socio2.imprimir();
    }else{
        socio3.imprimir();
    }
}

int main(){
    Club n;
    n.mayorAntiguedad();
    cin.get();
    cin.get();
    return 0;
}