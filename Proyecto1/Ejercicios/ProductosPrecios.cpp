/*Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.*/

#include<iostream>

using namespace std;

class Productos{
    private:
        char produc[5][80];
        float precios[5];
    public:
        void carga();
        void pMayor();
};

void Productos::carga(){
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el nombre del producto: \n";
        cin.getline(produc[i],80);
        cout << "Ingrese su precio: \n";
        cin >> precios[i];
        cin.get();
    }
}

void Productos::pMayor(){
    int mayor = 0;
    for(int i = 1; i < 5; i++){
        if(precios[i] > precios[0]){
            mayor += 1;
        }
    }
    cout << "Hay " << mayor << " productos con un precio mayor al primer producto ingresado.\n";
}

int main(){
    Productos p;
    p.carga();
    p.pMayor();
    cin.get();
    cin.get();
    return 0;
}