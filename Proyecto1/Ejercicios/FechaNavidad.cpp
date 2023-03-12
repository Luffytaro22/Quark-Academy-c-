/*Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.*/

#include<iostream>

using namespace std;

int main(){
    int dia,mes,año;
    cout << "Ingrese un dia del mes: ";
    cin >> dia;
    cout << "Ingrese un mes en numero: ";
    cin >> mes;
    cout << "Ingrese un ano: ";
    cin >> año;
    if(dia == 25 && mes == 12){
        cout << "Feliz Navidad (/^_^)/";
    }else{
        cout << "Otro dia mas (-_-)";
    }
    cin.get();
    cin.get();
    return 0;
}