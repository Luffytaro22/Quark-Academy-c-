/*Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores, por ejemplo 11%2 retorna un 1):*/

#include<iostream>

using namespace std;

int main(){
    int n,num, count, pares, impares;
    count = 1;
    pares = 0;
    impares = 0;
    cout << "Cuantos numeros va a ingresar? ";
    cin >> n;
    while(count <= n){
        cout << "Ingrese un numero \t";
        cin >> num;
        if(num % 2 == 0){
            pares += 1;
        }else{
            impares += 1;
        }
        count += 1;
    }
    cout << "La cantidad de numeros pares de " << pares << " y la cantidad de numeros impares es de " << impares << ".";
    cin.get();
    cin.get();
    return 0;
}