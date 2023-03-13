/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.*/

#include<iostream>

using namespace std;

class Elements {
    private:
        float num[8];
    public:
        void suma();
        void entrada();
};

void Elements::entrada(){
    for(int i = 0; i < 8; i++){
        cout << "Ingrese el valor " << i << ".\n";
        cin >> num[i];
    }
}

void Elements::suma(){
    int suma = 0;
    int sumaM = 0;
    int M50 = 0;
    for(int i = 0; i < 8; i++){
        suma = suma + num[i];
        if(num[i] > 36){
            sumaM = sumaM + num[i];
        }
        if(num[i] > 50){
            M50 += 1;
        }
    }
    cout << "La suma de todos los elementos del vector es de " << suma << ".\n";
    cout << "La suma de los elementos mayores a 36 es de " << sumaM << ".\n";
    cout << "La cantidad de valores mayores a 50 es de " << M50 << ".\n";
}

int main(){
    Elements arr;
    arr.entrada();
    arr.suma();
    cin.get();
    cin.get();
    return 0;
}
