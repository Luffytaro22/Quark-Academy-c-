/*En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
Estado de la cuenta	'Acreedor' si el saldo es >0.
			'Deudor' si el saldo es <0.
			'Nulo' si el saldo es =0.
b) La suma total de los saldos acreedores.*/

#include<iostream>

using namespace std;

int main(){
    int cuenta, saldo,suma;
    suma = 0;
    do{
        cout << "Ingrese su numero de cuenta: ";
        cin >> cuenta;
        if(cuenta > 0){
            cout << "Ingrese su saldo actual: ";
            cin >> saldo;
            if(saldo == 0){
                cout << "Nulo.\n";
            }else if(saldo > 0){
                cout << "Acreedor.\n";
                suma = suma + saldo;
            }else{
                cout << "Deudor.\n";
            }
        }       
    }while(cuenta > 0);
    cout << "La suma de los saldos acreedores es de " << suma << ".\n";
    cin.get();
    cin.get();
    return 0;
}