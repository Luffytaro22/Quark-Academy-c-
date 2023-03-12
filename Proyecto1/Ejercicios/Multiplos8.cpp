/*Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en pantalla 8 - 16 - 24, etc.*/

#include<iostream>

using namespace std;

int main(){
    int n;
    n = 8;
    while(n <= 500){
        cout << n;
        cout << " - ";
        n = n + 8;
    }
    cin.get();
    cin.get();
    return 0;
}

