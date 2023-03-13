/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.*/

#include<iostream>
using namespace std;

class Vectores{
    private:
        int vec1[4],vec2[4],vec3[4];
    public:
        void carga();
        void suma();
};

void Vectores::carga(){
    for(int i = 0; i < 4; i++){
        cout << "Ingrese el valor " << i << " del primer vector. \n";
        cin >> vec1[i];
    }
    for(int i = 0; i < 4; i++){
        cout << "Ingrese el valor " << i << " del segundo vector. \n";
        cin >> vec2[i];
    }
}

void Vectores::suma(){
    for(int i = 0; i < 4; i++){
        vec3[i] = vec1[i] + vec2[i];
    }
    cout << "La suma de los dos vectores es igual a \n";
    for(int i = 0; i < 4; i++){
        cout << vec3[i];
        cout << "\n";
    }
}

int main(){
    Vectores arr;
    arr.carga();
    arr.suma();
    cin.get();
    cin.get();
    return 0;
}