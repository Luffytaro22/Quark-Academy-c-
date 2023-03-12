/*Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor.*/

#include<iostream>

using namespace std;

int main(){
    int t_m,t_t,t_n,i,promedio_m,promedio_t,promedio_n;
    promedio_m = 0;
    promedio_t = 0;
    promedio_n = 0;
    for(i = 0; i < 5; i++){
        cout << "Ingrese la edad del estudiante del turno de la manana: \n";
        cin >> t_m;
        promedio_m = promedio_m + t_m;
    }
    for(i = 0; i < 6; i++){
        cout << "Ingrese la edad del estudiante del turno de la tarde: \n";
        cin >> t_t;
        promedio_t = promedio_t + t_t;
    }
    for(i = 0; i < 11; i++){
        cout << "Ingrese la edad del estudiante del turno de la noche: \n";
        cin >> t_n;
        promedio_n = promedio_n + t_n;
    }
    cout << "El promedio de las edades del tuno de la mañana es de " << promedio_m/5 << ".\n";
    cout << "El promedio de las edades del tuno de la tarde es de " << promedio_t/6 << ".\n";
    cout << "El promedio de las edades del tuno de la noche es de " << promedio_n/11 << ".\n";
    if(promedio_m/5 > promedio_t/6 && promedio_m/5 > promedio_n/11){
        cout << "El turno de la mañana tiene un promedio de edades mayor.\n";
    }else if(promedio_t/6 > promedio_m/5 && promedio_t/6 > promedio_n/11){
        cout << "El turno de la tarde tiene un promedio de edades mayor.\n";
    }else{
        cout << "El turno de la noche tiene un promedio de edades mayor.\n";
    }
    cin.get();
    cin.get();
    return 0;
}
