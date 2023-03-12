/*Realizar un programa que lea los lados de n triángulos, e informar:
a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
b) Cantidad de triángulos de cada tipo.
c) Tipo de triángulo que posee menor cantidad.*/

#include<iostream>

using namespace std;

int main(){
    int n,lado1,lado2,lado3,equilatero,isosceles,escaleno,i;
    equilatero = 0;
    isosceles = 0;
    escaleno = 0;
    cout << "Cuantos triangulos quiere evaluar? ";
    cin >> n;
    for(i = 1; i <= n; i++){
        cout << "Ingrese los lados del triangulo " << i << ".\n";
        cin >> lado1;
        cin >> lado2;
        cin >> lado3;
        if(lado1 == lado2 && lado1 == lado3){
            cout << "Es un triangulo equilatero.\n";
            equilatero += 1;
        }else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            cout << "Es un triangulo isosceles.\n";
            isosceles += 1;
        }else{
            cout << "Es un triangulo escaleno.\n";
            escaleno += 1;
        }
    }
    cout << "Hay " << equilatero << " triangulos equilateros.\n";
    cout << "Hay " << isosceles << " triangulos isosceles.\n";
    cout << "Hay " << escaleno << " triangulos escalenos.\n";
    if(equilatero < isosceles && equilatero < escaleno){
        cout << "El de menor cantidad es el equilatero.";
    }else if(isosceles < equilatero && isosceles < escaleno){
        cout << "El de menor cantidad es el isosceles.";
    }else{
        cout << "El de menor cantidad es el escaleno.";
    }
    cin.get();
    cin.get();
    return 0;
}