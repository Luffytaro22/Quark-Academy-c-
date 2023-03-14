/*Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente)
Imprimir luego la matriz.*/

#include<iostream>
using namespace std;

class Matriz{
    private:
        int mat[2][5];
    public:
        void carga();
        void imprimir();
};

void Matriz::carga(){
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 5; c++){
            cout << "Ingrese los valores de la columna " << c+1 << ", fila " << f+1 << " .\n";
            cin >> mat[f][c];
        }
    }
}

void Matriz::imprimir(){
    cout << "\n";
    for(int f = 0; f < 2; f++){
        for(int c = 0; c < 5; c++){
            cout << mat[f][c] << " ";
        }
        cout << "\n";
    }
}

int main(){
    Matriz m;
    m.carga();
    m.imprimir();
    cin.get();
    cin.get();
    return 0;
}