/*Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. En el constructor cargarlo con valores aleatorios entre 0 y 10.
La clase debe utilizar solo la palabra clave public en la declaración de la clase.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Vector{
        int vec[5];
    public: 
        Vector();
        void Mayor();
        void Menor();
};

Vector::Vector(){
    cout << "El vector generado es: \n";
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        vec[i] = rand() % 11;
        cout << vec[i] << " - ";
    }
    cout << "\n";
}

void Vector::Mayor(){
    int mayor = vec[0];
        for(int i = 1; i < 5; i++){
            if(vec[i] > mayor){
                mayor = vec[i];
            }
        }
    cout << "El elemento de mayor valor es " << mayor << ".\n";
}

void Vector::Menor(){
    int menor = vec[0];
    for(int i = 1; i < 5; i++){
        if(vec[i] < menor){
            menor = vec[i];
        }
    }
    cout << "El elemento de menor valor es " << menor << ".\n";
}

int main(){
    Vector v1;
    v1.Mayor();
    v1.Menor();
    cin.get();
    cin.get();
    return 0;
}