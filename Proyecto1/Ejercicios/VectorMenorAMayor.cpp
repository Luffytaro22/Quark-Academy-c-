/*Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.*/

#include<iostream>
#include<string.h>

using namespace std;

class Vectores{
    private:
        int num[5];
        char caracter[5][100];
    public:
        void carga();
        void menorMayor();
        void Mayormenor();
};

void Vectores::carga(){
    for(int i = 0; i < 5; i++){
        cout << "Ingrese numeros para el primer vector: ";
        cin >> num[i];
        cin.get();
    }
    cout << "\n";
    for(int i = 0; i < 5; i++){
        cout << "Ingrese caracteres para el segundo vector: ";
        cin.getline(caracter[i],100);
    }
    cout << "\n";
}

void Vectores::Mayormenor(){
    int aux;
    char aux2[100];
    for(int k = 0; k < 5; k++){
        for(int i = 0; i < 4-k; i++){
            if(num[i] < num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
            }
        }
    }
    for(int k = 0; k < 5; k++){
        for(int i = 0; i < 4-k; i++){
            if(strcmp(caracter[i],caracter[i+1]) < 0){
                strcpy_s(aux2,100,caracter[i]);
                strcpy_s(caracter[i],100,caracter[i+1]);
                strcpy_s(caracter[i+1],100,aux2);
            }
        }
    }
    cout << "El primer vector ordenado de mayor a menor es: \n";
    for(int i = 0; i < 5; i++){
        cout << num[i];
        cout << " - ";
    }
    cout << "\n";
    cout << "El segundo vector ordenado de mayor a menor es: \n";
    for(int i = 0; i < 5; i++){
        cout << caracter[i];
        cout << " - ";
    }
    cout << "\n";
}

void Vectores::menorMayor(){
    int aux;
    char aux2[100];
    for(int k = 0; k < 5; k++){
        for(int i = 0; i < 5-k; i++){
            if(num[i] > num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
            }
        }
    }
    for(int k = 0; k < 5; k++){
        for(int i = 0; i < 5-k; i++){
            if(strcmp(caracter[i],caracter[i+1]) > 0){
                strcpy_s(aux2,100,caracter[i]);
                strcpy_s(caracter[i],100,caracter[i+1]);
                strcpy_s(caracter[i+1],100,aux2);
            }
        }
    }
    cout << "\n";
     cout << "El primer vector ordenado de menor a mayor es: \n";
    for(int i = 0; i < 5; i++){
        cout << num[i];
        cout << " - ";
    }
    cout << "\n";
    cout << "El segundo vector ordenado de menor a mayor es: \n";
    for(int i = 0; i < 5; i++){
        cout << caracter[i];
        cout << " - ";
    }
}

int main(){
    Vectores vec1;
    vec1.carga();
    vec1.Mayormenor();
    vec1.menorMayor();
    cin.get();
    cin.get();
    return 0;
}