/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.*/

#include<iostream>

using namespace std;

int main(){
    int n,p,ne,mul,suma,i;
    p = 0;
    ne = 0;
    mul = 0;
    suma = 0;
    for(i = 0; i < 10; i++){
        cout << "Inggrese el valor " << i << ".\n";
        cin >> n;
        if(n % 15 == 0){
            mul += 1;
        }
        if(n % 2 == 0){
            suma = suma + n;
        }
        if(n > 0){
            p += 1;
        }else if(n < 0){
            ne += 1;
        }
    }
    cout << "La cantidad de valores negativos es de " << ne << ".\n";
    cout << "La cantidad de valores positivos es de " << p << ".\n";
    cout << "La cantidad de multiplos de 15 es de " << mul << ".\n";
    cout << "La suma de los pares es de " << suma << ".\n";
    cin.get();
    cin.get();
    return 0;
}