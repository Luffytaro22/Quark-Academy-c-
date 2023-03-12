/*Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    if(n > 0){
        cout << "El numero es positivo";
    }else{
        if(n < 0){
            cout << "El numero es negativo";
        }else{
            cout << "El numero es nulo";
        }
    }
    cin.get();
    cin.get();
    return 0;
}