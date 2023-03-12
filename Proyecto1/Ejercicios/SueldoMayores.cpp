/*En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.*/

#include<iostream>

using namespace std;

int main(){
    float sueldo, total;
    int count1,count2,n,nCount;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    nCount = 1;
    count1 = 0;
    count2 = 0;
    total = 0;
    while(nCount <= n){
        cout << "Ingrese el sueldo del trabajador " << nCount << ".\t";
        cin >> sueldo;
        if(sueldo >= 100 && sueldo <= 300){
            count1 += 1;
        }else if(sueldo > 300){
            count2 += 1;
        }
        total = total + sueldo;
        nCount += 1;
    }
    cout << "La cantidad de empleados con sueldos entre $100 y $300 es de: " << count1 << ".\n";
    cout << "La cantidad de empleados con sueldos mayores a 300 es de: " << count2 << ".\n";
    cout << "La empresa gasta un total de " << total << " en sueldos a los trabajadores.";
    cin.get();
    cin.get();
    return 0;
}