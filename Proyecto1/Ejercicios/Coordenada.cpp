/*Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)*/

#include<iostream>

using namespace std;

int main(){
    int x,y;
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
    if(x > 0 && y > 0){
        cout << "La coordenada se encuentra en el primer cuadrante";
    }else{
        if(y > 0 && x < 0){
            cout << "La coordenada se encuentra en el segundo cuadrante";
        }else if(x > 0 && y < 0){
            cout << "La coordenada se encuentra en el tercer cuadrante";
        }else{
            cout << "La coordenada se encuentra en el cuarto cuadrante";
        }
    }
    cin.get();
    cin.get();
    return 0;
}