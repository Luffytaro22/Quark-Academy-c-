/*Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
a) De cada triángulo la medida de su base, su altura y su superficie.
b) La cantidad de triángulos cuya superficie es mayor a 12.*/

#include<iostream>

using namespace std;

int main(){
    int n,  i,count;
    float superficie,base, altura;
    count = 0;
    cout << "Ingrese la cantidad de pares de datos: ";
    cin >> n;
    for(i = 0; i < n; i++){
        cout << "\n Ingrese la base y la altura: \n";
        cin >> base;
        cin >> altura;
        superficie = base * altura / 2;
        cout << "\n La base es de " << base << ", la altura es de " << altura << ", y la superficie es de " << superficie << ".";
        if(superficie > 12){
            count += 1;
        }
    }
    cout << "\n La cantidad de triangulos cuya superficie es mayor a 12 es de " << count << ".";
    cin.get();
    cin.get();
    return 0;
}