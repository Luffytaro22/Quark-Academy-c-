/*Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".*/
#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    float promedio;
    cout << "Ingrese la primera nota: ";
    cin >> n1;
    cout << "Ingrese la segunda nota: ";
    cin >> n2;
    cout << "Ingrese la tercera nota: ";
    cin >> n3;
    promedio = (n1+n2+n3)/3;
    if(promedio >= 7){
        cout << "Promocionado";
    }else{
        cout << "Mejor suerte para la proxima T-T";
    }
    cin.get();
    cin.get();
    return 0;
}