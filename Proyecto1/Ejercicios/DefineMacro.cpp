/*Plantear una clase para administrar una matriz de enteros de 4 filas y 2 columnas. Definir dos macros para indicar la cantidad de filas y columnas.*/

#include<iostream>
#define FILAS 4
#define COLUMNAS 2
#define DETENER cin.get(); cin.get();
using namespace std;

class Matriz{
        int mat[FILAS][COLUMNAS];
    public:
        Matriz();
        void imprimir();
};

Matriz::Matriz(){
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout << "Ingrese el valor de la fila " << i+1 << ", columna " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
}

void Matriz::imprimir(){
    cout << "La matriz es: \n";
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    Matriz m1;
    m1.imprimir();
    DETENER
    return 0;
}

