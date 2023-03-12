/*Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.*/

#include<iostream>

using namespace std;

int main(){
    int x,y,c1,c2,c3,c4,n,i;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = 0;
    cout << "Ingrese la cantidad de coordenadas: ";
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "Ingrese la coordenada x e y: \n";
        cin >> x;
        cin >> y;
        if(x > 0 && y > 0){
            c1 += 1;
        }else{
            if(x < 0 && y > 0){
                c2 += 1;
            }else if(x > 0 && y < 0){
                c3 += 1;
            }else{
                c4 += 1;
            }
        }
    }
    cout << "Se han ingresado " << c1 << " coordenadas en el primer cuadrante.\n";
    cout << "Se han ingresado " << c2 << " coordenadas en el segundo cuadrante.\n";
    cout << "Se han ingresado " << c3 << " coordenadas en el tercer cuadrante.\n";
    cout << "Se han ingresado " << c4 << " coordenadas en el cuarto cuadrante.\n";
    cin.get();
    cin.get();
    return 0;
}