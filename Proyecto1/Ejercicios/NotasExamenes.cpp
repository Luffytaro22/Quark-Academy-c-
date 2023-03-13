/*En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.*/

#include<iostream>
using namespace std;

class Examenes{
    private:
        char nombres[4][100];
        float notas[4];
    public:
        void carga();
        void condicion();
};

void Examenes::carga(){
    for(int i = 0; i < 4; i++){
        cout << "Ingresar el nombre del alumno \n";
        cin.getline(nombres[i],100);
        cout << "Ingresar su nota \n";
        cin >> notas[i];
        cin.get();
    }
}

void Examenes::condicion(){
    int Mbueno = 0;
    for(int i = 0; i < 4; i++){
        cout << "\n";
        cout << nombres[i];
        cout << "\n";
        cout << notas[i];
        cout << "\n";
        if(notas[i] >= 8){
            cout << "Muy bueno \n";
            Mbueno +=1;
        }else if(notas[i >= 4 && notas[i] <= 7]){
            cout << "Bueno \n";
        }else{
            cout << "Insuficiente \n";
        }
    }
    cout << "La cantidad de alumnos con la leyenda 'Muy bueno' es de " << Mbueno << ".\n";
}

int main(){
    Examenes e;
    e.carga();
    e.condicion();
    cin.get();
    cin.get();
    return 0;
}
