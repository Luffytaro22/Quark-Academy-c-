/*Se desea saber la temperatura media trimestral de cuatro paises pequeños. Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
a - Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
b - Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
c - Calcular la temperatura media trimestral de cada país.
d - Imprimir los nombres de los países y las temperaturas medias trimestrales.
e - Imprimir el nombre del país con la temperatura media trimestral mayor.*/

#include<iostream>
#include<string.h>

using namespace std;

class Temperatura{
    private:
        char paises[4][100];
        float temp[4][3];
        float tempT[4];
    public:
        void carga();
        void suma();
        void imprimir();
        void impTMayor();
        void Ttotal();
};

void Temperatura::carga(){
    for(int f = 0; f < 4; f++){
        cout << "Ingrese el nombre del pais: ";
        cin.getline(paises[f],100);
        for(int c = 0; c < 3; c++){
            cout << "Ingrese la temperatura media del mes " << c+1 << ": ";
            cin >> temp[f][c];
            cin.get();
        }
    }
}

void Temperatura::suma(){
    for(int f = 0; f < 4; f++){
        int suma = 0;
        for(int c = 0; c < 3; c++){
            suma = suma + temp[f][c];
        }
        tempT[f] = suma/3;
    }
}

void Temperatura::imprimir(){
    cout << "Las temperaturas promedio mensuales de cada pais son: \n";
    for(int f = 0; f < 4; f++){
        cout << "\n";
        cout << paises[f] << " - ";
        for(int c = 0; c < 3; c++){
            cout << temp[f][c] << " - ";
        }
        cout << "\n";
    }
}

void Temperatura::Ttotal(){
    cout << "Las temperaturas medias trimestrales de cada pais son: \n";
    for(int i = 0; i < 4; i++){
        cout << "\n";
        cout << paises[i] << " - ";
        cout << tempT[i] << " - ";
        cout << "\n";
    }
}

void Temperatura::impTMayor(){
    int mayor = tempT[0];
    char M[100];
    strcpy_s(M, 100, paises[0]);
    for(int i = 0; i < 4; i++){
        if(tempT[i] > mayor){
            mayor = tempT[i];
            strcpy_s(M,100,paises[i]);
        }
    }
    cout << "\n";
    cout << "El pais " << M << " tiene la temperatura trimestral mayor de " << mayor << ".\n";
}

int main(){
    Temperatura t;
    t.carga();
    t.imprimir();
    t.suma();
    t.Ttotal();
    t.impTMayor();
    cin.get();
    cin.get();
    return 0;
}