/*De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.*/

#include<iostream>

using namespace std;

int main(){
    int sueldo, años, aumento;
    cout << "Ingrese su sueldo: ";
    cin >> sueldo;
    cout << "Ingrese sus años de antiguedad: ";
    cin >> años;
    if(sueldo < 500 && años >= 10){
        aumento = sueldo + sueldo * 0.2;
        cout << "Por su antiguedad, se le otorgara un aumento del 20%, su sueldo sera: ";
        cout << aumento;
    }else{
        if(sueldo < 500 && años < 10){
            aumento = sueldo + sueldo * 0.05;
            cout << "Dada su antiguedad, se le dara un aumento del 5%. Su sueldo sera de: ";
            cout << aumento;
        }else{
            cout << "Su sueldo es de: ";
            cout << sueldo;
        }
    }
    cin.get();
    cin.get();
    return 0;
}