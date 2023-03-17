/*Plantear una clase llamada Punto con dos atributos llamados x e y.
Definir dos constructores uno sin parámetros donde cargue en los atributos x e y el valor cero y otro con dos parámetros que cargue los atributos x e y con los valores que llegan al constructor. Imprimir los valores de los atributos.*/

#include<iostream>

using namespace std;

class Punto{
        float x, y;
    public:
        Punto();
        Punto(float a, float b);
};

Punto::Punto(){
    x = 0;
    y = 0;
    cout << "Los parametros x e y son iguales a: \n";
    cout << "x = " << x << ", y = " << y << ".\n";
}

Punto::Punto(float a, float b){
    x = a;
    y = b;
    cout << "Los parametros x e y son iguales a: \n";
    cout << "x = " << x << ", y = " << y << ".\n";
}

int main(){
    Punto p1;
    Punto p2(5.24f, 8.7f);
    cin.get();
    cin.get();
    return 0;
}