/*Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)*/

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
    if(n1 < n2 && n1 < n3){
        if(n2 < n3){
            cout << "El mayor es " << n3 << " y el menor es " << n1 << ".";
        }else{
            cout << "El mayor es " << n2 << " y el menor es " << n1 << ".";
        }
    }else{
        if(n2 < n1 && n2 < n3){
            if(n1 < n3){
                cout << "El mayor es " << n3 << " y el menor es " << n2 << ".";
            }else{
                cout << "El mayor es " << n1 << " y el menor es " << n2 << ".";
            }
        }else{
            if(n1 < n2){
                cout << "El mayor es " << n2 << " y el menor es " << n3 << ".";
            }else{
                cout << "El mayor es " << n1 << " y el menor es " << n3 << ".";
            }
        }
    }
    cin.get();
    cin.get();
    return 0;
}