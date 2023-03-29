/*Cargar una oración por teclado. Modificar el string de tal forma que se borren todos los espacios en blanco entre palabras.*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string oracion;
    cout << "Ingrese una oracion: ";
    getline(cin,oracion);
    int length = oracion.length();
    for(int i = 0; i < length; i++){
        if(oracion.at(i) == ' '){
            oracion.erase(i,1);
            length--;
        }
    }
    cout << "La oracion despues de eliminar los espacios en blanco es: " << oracion << ".\n";
    cin.get();cin.get();
    return 0;
}