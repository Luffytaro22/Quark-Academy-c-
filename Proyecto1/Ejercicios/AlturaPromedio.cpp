/*Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.*/

#include<iostream>

using namespace std;

int main(){
    int n,count;
    float altura, promedio,suma;
    cout << "Ingrese la cantidad de alturas: ";
    cin >> n;
    count = 1;
    suma = 0;
    while(count <= n){
        cout << "Ingrese la altura " << count << ": \t";
        cin >> altura;
        suma = suma + altura;
        count += 1;
    }
    promedio = suma/n;
    cout << "La altura promedio de las personas es de " << promedio << ".";
    cin.get();
    cin.get();
    return 0;

}