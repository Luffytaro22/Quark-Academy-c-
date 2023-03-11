#include<iostream>

using namespace std;

int main()
{
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    cout <<"Ingrese Horas trabajadas por el operario:";
    cin >>horasTrabajadas;
    cout <<"Ingrese el pago por hora:";
    cin >>costoHora;
    sueldo = horasTrabajadas * costoHora;
    cout <<"El sueldo total del operario es:";
    cout <<sueldo;
    return 0;
}