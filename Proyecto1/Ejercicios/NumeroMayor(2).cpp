/*Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.*/

#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;
    if(n1 > n2 && n1 > n3){
        cout << "El numero mayor es: ";
        cout << n1;
    }else{
        if(n2 > n3 && n2 > n1){
            cout << "El numero mayor es: ";
            cout << n2;
        }else{
            cout << "El numero mayor es: ";
            cout << n3;
        }
    }
    cin.get();
    cin.get();
    return 0;
}