/*Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.*/

#include<iostream>

using namespace std;

class Vector{
    private:
        float arr[10];
    public:
        void carga();
        void menorMayor();
};

void Vector::carga(){
    for(int i = 0; i < 10; i++){
        cout << "Ingrese el elemento " << i << " del vector.\n";
        cin >> arr[i];
    }
}

void Vector::menorMayor(){
    int count = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i] > arr[i+1]){
            cout << "No esta ordenado de menor a mayor.\n";
            count = 1;
            break;
        }
    }
    if(count == 0){
        cout << "Si esta ordenado de menor a mayor.\n ";
    }
}

int main(){
    Vector v;
    v.carga();
    v.menorMayor();
    cin.get();
    cin.get();
    return 0;
}