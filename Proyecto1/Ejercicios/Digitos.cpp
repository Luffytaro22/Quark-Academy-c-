/*Se ingresa por teclado un número positivo de uno o dos dígitos (1.99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero de uno o dos digitos: ";
    cin >> n;
    if(n < 10){
        cout << "Tiene un solo digito";
    }else{
        cout << "Tiene dos digitos";
    }
    cin.get();
    cin.get();
    return 0;
}