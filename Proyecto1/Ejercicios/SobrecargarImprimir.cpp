/*Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que :
void imprimir(); //imprime todo el vector
void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
void imprimir(int desde,int hasta);//imprime un rango de valores del vector.*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Imprimir{
        int vec[5];
    public:
        void imprimir();
        void imprimir(int hasta);
        void imprimir(int desde, int hasta);
};

void Imprimir::imprimir(){
    cout << "El vector es igual a: \n";
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        vec[i] = rand();
        cout << vec[i] << " - ";
    }
}

void Imprimir::imprimir(int hasta){
    cout << "\n";
    cout << "El vector hasta la posicion " << hasta << " es igual a: \n";
    for(int i = 0; i <= hasta; i++){
        cout << vec[i] << " - ";
    }
}

void Imprimir::imprimir(int desde, int hasta){
    cout << "\n";
    cout << "El vector desde la posicion " << desde << " hasta la posicion " << hasta << " es igual a: \n";
    for(int i = desde; i <= hasta; i++){
        cout << vec[i] << " - ";
    }
}

int main(){
    Imprimir v1;
    v1.imprimir();
    v1.imprimir(4);
    v1.imprimir(2,4);
    cin.get();
    cin.get();
    return 0;
}
