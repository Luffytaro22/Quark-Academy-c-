/*Plantear una clase para administrar una lista genérica doblemente encadenada implementando los siguientes métodos:
a) Insertar un nodo al principio de la lista.
b) Insertar un nodo al final de la lista.
c) Insertar un nodo en la segunda posición. Si la lista está vacía no se inserta el nodo.
d) Insertar un nodo en la ante última posición.
e) Borrar el primer nodo.
f) Borrar el segundo nodo.
g) Borrar el último nodo.
h) Borrar el nodo con información mayor.*/
#include<iostream>
using namespace std;

class ListaGenericaDoble{
    private:
        class Nodo{
            public:
                int info;
                Nodo *sig;
                Nodo *ant;
        };
        Nodo *raiz;
    public:
        ListaGenericaDoble();
        ~ListaGenericaDoble();
        void insertar(int pos, int x);
        int cantidad();
        void borrar(int pos);
        bool vacia();
        int mayor();
        int posMayor();
        void imprimir();
};

ListaGenericaDoble::ListaGenericaDoble(){
    raiz = NULL;
}

ListaGenericaDoble::~ListaGenericaDoble(){
    Nodo *aux = raiz;
    Nodo *aux2;
    while(aux != NULL){
        aux2 = aux;
        aux = aux->sig;
        delete aux2;
    }
}

int ListaGenericaDoble::cantidad(){
    Nodo *aux = raiz;
    int cant = 0;
    while(aux != NULL){
        cant++;
        aux = aux->sig;
    }
    return cant;
}

void ListaGenericaDoble::insertar(int pos, int x){
    if(pos <= cantidad() + 1){
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if(pos == 1){
            nuevo->sig = raiz;
            if(raiz != NULL){
                raiz->ant = nuevo;
            }
            raiz = nuevo;
        }else{
            if(pos == cantidad() + 1){
                Nodo *reco = raiz;
                while(reco->sig != NULL){
                    reco = reco->sig;
                }
                reco->sig = nuevo;
                nuevo->ant = reco;
                nuevo->sig = NULL;
            }else{
                Nodo *reco = raiz;
                for(int i = 1; i <= pos - 2; i++){
                    reco = reco->sig;
                }
                Nodo *siguiente = reco->sig;
                reco->sig = nuevo;
                nuevo->ant = reco;
                nuevo->sig = siguiente;
                siguiente->ant = nuevo;
            }
        }
    }
}

void ListaGenericaDoble::borrar(int pos){
    if(pos <= cantidad()){
        Nodo *bor;
        if(pos == 1){
            bor = raiz;
            raiz = raiz->sig;
            if(raiz != NULL){
                raiz->ant = NULL;
            }
        }else{
            Nodo *reco;
            reco = raiz;
            for(int i = 1; i <= pos - 2; i++){
                reco = reco->sig;
            }
            Nodo *prox = reco->sig;
            bor = prox;
            reco->sig = prox->sig;
            Nodo *siguiente = prox->sig;
            if(siguiente != NULL){
                siguiente->ant = reco;
            }
        }
        delete bor;
    }
}

bool ListaGenericaDoble::vacia(){
    if(raiz == NULL){
        return true;
    }else{
        return false;
    }
}

int ListaGenericaDoble::mayor(){
    if(!vacia()){
        int may = raiz->info;
        Nodo *reco = raiz->sig;
        while(reco != NULL){
            if(reco->info > may){
                may = reco->info;
            }
            reco = reco->sig;
        }
        return may;
    }else{
        return -1;
    }
}

int ListaGenericaDoble::posMayor(){
    if(!vacia()){
        int may = raiz->info;
        int x = 1;
        int pos = x;
        Nodo *reco = raiz->sig;
        while(reco != NULL){
            if(reco->info > may){
                may = reco->info;
                pos = x;
            }
            reco = reco->sig;
            x++;
        }
        return pos;
    }else{
        return -1;
    }
}

void ListaGenericaDoble::imprimir(){
    Nodo *reco = raiz;
    cout << "Listado completo: \n";
    while(reco != NULL){
        cout << reco->info << " - ";
        reco = reco->sig;
    }
    cout << "\n";
}

int main(){
    int p, x;
    ListaGenericaDoble *lista = new ListaGenericaDoble();
    do{
        cout << "Ingrese el valor y la posicion en la lista: \n";
        cin >> x;
        if(x == -1) break;
        cin >> p;
        lista->insertar(p,x);
        lista->imprimir();
        cout << "La cantidad de elementos es de " << lista->cantidad() << ".\n";
    }while(x != -1);

    do{
        cout << "Ingrese la posicion a borrar. Ingrese -1 para dejar de borrar: ";
        cin >> p;
        if(p == -1){
            break;
        }
        lista->borrar(p);
        lista->imprimir();
        cout << "La cantidad de elementos es de " << lista->cantidad() << ".\n";
        cout << "El valor mayor es " << lista->mayor() << " y esta en la posicion " << lista->posMayor() << ".\n";
    }while(p != -1);
    delete lista;
    cin.get();
    cin.get();
    return 0;
}

