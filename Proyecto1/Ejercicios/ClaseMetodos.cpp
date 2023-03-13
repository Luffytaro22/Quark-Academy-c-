/*Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.*/

#include<iostream>
using namespace std;

class Mayor{
    private:
        int mayor(int n1, int n2);
    public:
        void entrada();
};

int Mayor::mayor(int n1, int n2){
    if(n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

void Mayor::entrada(){
    int num1, num2;
    cout << "Ingrese un valor: ";
    cin >> num1;
    cout << "Ingrese otro valor: ";
    cin >> num2;
    cout << "El mayor de ellos es " << mayor(num1,num2) << ".\n";
}

int main(){
    Mayor n1;
    n1.entrada();
    cin.get();
    cin.get();
    return 0;
}
