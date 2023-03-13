/*Cargar un vector de 5 elementos enteros. imprimir el menor y un mensaje si se repite dentro del vector.*/

#include<iostream>
using namespace std;

class Vector{
    private:
        int arr[5];
        int menor;
    public:
        void carga();
        void menorM();
        void repite();
};

void Vector::carga(){
    cout << "Ingrese los elementos del vector\n";
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
}

void Vector::menorM(){
    menor=100;
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] < menor){
            menor = arr[i];
        }
    }
    cout << "El numero menor es " << menor << ".\n";
}

void Vector::repite(){
    int count;
    count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] == menor){
            count += 1;
        }
    }
    if(count > 1){
        cout << "El numero se repite " << count << " veces.\n";
    }else{
        cout << "El numero no se repite.\n";
    }
}

int main(){
    Vector v;
    v.carga();
    v.menorM();
    v.repite();
    cin.get();
    cin.get();
    return 0;
}

