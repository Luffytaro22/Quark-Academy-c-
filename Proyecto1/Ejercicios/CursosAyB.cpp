/*Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.*/

#include<iostream>
using namespace std;

class Notas{
    private:
        float cursoA[5];
        float cursoB[5];
    public:
        void carga();
        void promedio();
};

void Notas::carga(){
    for(int i = 0; i < 5; i++){
        cout << "Ingrese las notas del curso A \n";
        cin >> cursoA[i];
    }
    for(int i = 0; i < 5; i++){
        cout << "Ingrese las notas del curso B \n";
        cin >> cursoB[i];
    }
}

void Notas::promedio(){
    float promedioA = 0;
    float promedioB = 0;
    for(int i = 0; i < 5; i++){
        promedioA = (promedioA + cursoA[i])/5;
        promedioB = (promedioB + cursoB[i])/5;
    }   
    if(promedioA > promedioB){
        cout << "El curso A tiene mayor promedio.\n";
    }else{
        cout << "El curso B tiene mayor promedio.\n";
    }
}

int main(){
    Notas curso;
    curso.carga();
    curso.promedio();
    cin.get();
    cin.get();
    return 0;
}