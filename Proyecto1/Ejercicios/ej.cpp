/*Crear una clase llamada Pila que contenga una clase Nodo*/

#include<iostream>
using namespace std;

class Pila{
    private:
        class Nodo{
            public:
                float inf;
                Nodo *sig;
        };
        Nodo *raiz;
    public:
        Pila();
        ~Pila();
        void carga(float x);
        void imprimir();
        float extraer();
        bool vacio();
};

Pila::Pila(){
    raiz = NULL;
}

void Pila::carga(float x){
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->inf = x;
    if(raiz == NULL){
        raiz = nuevo;
        nuevo->sig = NULL;
    }else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void Pila::imprimir(){
    Nodo *imp = raiz;
    cout << "La lista de los elementos es: \n";
    while(imp != NULL){
        cout << imp->inf << " - ";
        imp = imp->sig;
    }
    cout << "\n";
}

float Pila::extraer(){
    if(raiz != NULL){
        float inf2 = raiz->inf;
        Nodo *aux = raiz;
        raiz = raiz->sig;
        delete aux;
        return inf2;
    }else{
        return -1;
    }
}

bool Pila::vacio(){
    if(raiz == NULL){
        return true;
    }else{
        return false;
    }
}

Pila::~Pila(){
    Nodo *trash = raiz;
    Nodo *t2;
    while(trash != NULL){
        t2 = trash;
        trash = trash->sig;
        delete t2;
    }
}

int main(){
    float n;
    Pila *pila1;
    pila1 = new Pila();
    cout << "Ingrese los elementos de la lista: \n";
    for(int i = 0; i < 5; i++){
        cin >> n;
        pila1->carga(n);
    }
    pila1->imprimir();
    while(pila1->vacio() == false){
         cout << "\n Se extrae de la pila: " << pila1->extraer() << ".";
    }
    
    
    delete pila1;
    cin.get();
    cin.get();
    return 0;
}