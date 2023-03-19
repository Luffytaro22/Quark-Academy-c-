/*Crear una matriz de 3 filas por 3 columnas. Implementar un método que permita cargar todas sus componentes, otro que la imprima y otra método que retorne la fila y columna (retorna dos datos el método) donde se encuentra el mayor elemento del vector (si está repetido retorne la posición de cualquiera de ellos)*/

#include<iostream>

using namespace std;

class Matriz{
        int mat[3][3];
    public:
        void carga();
        void imprimir();
        void mayor(int *p1, int *p2);
};

void Matriz::carga(){
    for(int i = 0; i < 3; i++){
        cout << "Ingrese los valores de la fila " << i+1 << ".\n";
        for(int j = 0; j < 3; j++){
            cin >> mat[i][j];
            cin.get();
        }
    }
}

void Matriz::imprimir(){
    cout << "La matriz es \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << mat[i][j] << "  ";
        }
        cout << "\n";
    }
}

void Matriz::mayor(int *p1, int *p2){
    int mayor = mat[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] > mayor){
                mayor = mat[i][j];
                *p1 = i+1;
                *p2 = j+1;
                
            }
        }
    }
}

int main(){
    int n1, n2;
    Matriz m;
    m.carga();
    m.imprimir();
    m.mayor(&n1, &n2);
    cout << "El mayor elemento se encuentra en la fila " << n1 << ", columna " << n2 << ".\n";
    cin.get();
    cin.get();
    return 0;
}