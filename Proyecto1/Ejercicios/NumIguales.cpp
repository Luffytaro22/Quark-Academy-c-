/*Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.*/

#include<iostream>

using namespace std;

int main(){
    int n1,n2,n3,suma,mult;
    cout << "Ingrese un numero: ";
    cin >> n1;
    cout << "Ingrese un numero: ";
    cin >> n2;
    cout << "Ingrese un numero: ";
    cin >> n3;
    if(n1 == n2 && n1 == n3){
        suma = n1 + n2;
        mult = suma * n3;
        cout << "La suma del primero con el segundo es de: ";
        cout << suma;
        cout << "\n";
        cout << "El producto por el tercer es de: ";
        cout << mult;
    }else{
        cout << "No hay instrucciones (o.o)";
    }
    cin.get();
    cin.get();
    return 0;
}