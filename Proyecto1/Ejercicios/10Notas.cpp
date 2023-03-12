/*Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.*/

#include<iostream>

using namespace std;

int main(){
    int n, mayores, menores,count;
    count = 1;
    mayores = 0;
    menores = 0;
    while(count <= 10){
        cout << "Ingrese su nota: ";
        cin >> n;
        if(n >= 7){
            mayores += 1;
        }else{
            menores += 1;
        }
        count += 1;
    }
    cout << "La cantidad de alumnos que tienen notas mayores o iguales a 7 es de " << mayores << ".";
    cout << "\n";
    cout << "La cantidad de alumnos que tienen notas menores a 7 es de " << menores << ".";
    cin.get();
    cin.get();
    return 0;
}