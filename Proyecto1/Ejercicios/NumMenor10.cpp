/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".*/

#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;
    if(n1 < 10 && n2 < 10 && n3 < 10){
        cout << "Todos los numeros son menores a 10 (^o^) ";
    }else{
        cout << "No hay instrucciones (o.o)";
    }
    cin.get();
    cin.get();
    return 0;
}