/*Cargar en un vector los nombres de 5 países y en otro vector paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.*/

#include<iostream>
#include<string.h>

using namespace std;

class Paises{
    private:
        int habitantes[5];
        char paises[5][100];
    public:
        void carga();
        void alfabeticamente();
        void MayorMenor();
        void imprimir();
};

void Paises::carga(){
    cout << "Ingrese los nombres de los paises con sus respectivos habitantes: \n";
    for(int i = 0; i < 5; i++){
        cout << "\n";
        cout << "Ingrese el nombre del pais: ";
        cin.getline(paises[i],100);
        cout << "Ingrese la cantidad de habitantes: ";
        cin >> habitantes[i];
        cout << "\n";
        cin.get();
    }
}

void Paises::alfabeticamente(){
    for(int k = 0; k < 5; k++){
        for(int i = 0; i < 4 - k; i++){
            if(strcmp(paises[i], paises[i+1]) > 0){
                char aux[100];
                strcpy_s(aux,100,paises[i]);
                strcpy_s(paises[i],100,paises[i+1]);
                strcpy_s(paises[i+1],100,aux);
                int auxN;
                auxN = habitantes[i];
                habitantes[i] = habitantes[i+1];
                habitantes[i+1] = auxN;
            }
        }
    }
    cout << "\n";
    cout << "Los paises ordenados alfabeticamente son: \n";
}

void Paises::MayorMenor(){
    for(int k = 0; k < 5; k++){
        for(int i = 0; i < 4 - k; i++){
            if(habitantes[i] < habitantes[i+1]){
                char aux[100];
                strcpy_s(aux,100,paises[i]);
                strcpy_s(paises[i],100,paises[i+1]);
                strcpy_s(paises[i+1],100,aux);
                int auxN;
                auxN = habitantes[i];
                habitantes[i] = habitantes[i+1];
                habitantes[i+1] = auxN;
            }
        }
    }
    cout << "\n";
    cout << "Los paises ordenados respecto a la cantidad de habitantes son: \n";
}

void Paises::imprimir(){
    for(int i = 0; i < 5; i++){
        cout << "\n";
        cout << "\t" << paises[i] << "\t";
        cout << "\n";
        cout << "\t" << habitantes[i] << "\t";
        cout << "\n";
    }
}

int main(){
    Paises Ecuador;
    Ecuador.carga();
    Ecuador.alfabeticamente();
    Ecuador.imprimir();
    Ecuador.MayorMenor();
    Ecuador.imprimir();
    cin.get();
    cin.get();
    return 0;
}