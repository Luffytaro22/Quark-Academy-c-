/*Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".*/

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
    if(n1 < 10 || n2 < 10 || n3 < 10){
        cout << "Alguno de los numeros es menor a 10 (^o^) ";
    }else{
        cout << "No hay instrucciones (o.o)";
    }
    cin.get();
    cin.get();
    return 0;
}