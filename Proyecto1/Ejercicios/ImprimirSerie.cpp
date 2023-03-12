/*Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)*/

#include<iostream>

using namespace std;

int main(){
    int n, count;
    count = 1;
    n = 11;
    while(count <= 25){
        cout << n;
        cout << " - ";
        n = n + 11;
        count += 1;
    }
    cin.get();
    cin.get();
    return 0;
}