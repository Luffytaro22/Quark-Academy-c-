/*Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50).*/

#include<iostream>

using namespace std;

int main(){
    int n,i;
    n = 5;
    for(i = 0; i < 10; i++){
        cout << n;
        cout << "\n";
        n = n + 5;
    }
    cin.get();
    cin.get();
    return 0;
}