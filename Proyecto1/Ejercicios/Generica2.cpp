/*Plantear una clase para administrar una lista genérica implementando los siguientes métodos:
a) Insertar un nodo al principio de la lista.
b) Insertar un nodo al final de la lista.
c) Insertar un nodo en la segunda posición. Si la lista está vacía no se inserta el nodo.
d) Insertar un nodo en la ante última posición.
e) Borrar el primer nodo.
f) Borrar el segundo nodo.
g) Borrar el último nodo.
h) Borrar el nodo con información mayor.*/

#include <iostream>

using namespace std;

class ListaGenerica {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    ListaGenerica();
    ~ListaGenerica();
    int cantidad();
    void insertar(int pos, int x);
    int extraer(int pos);
    void borrar(int pos);
    void intercambiar(int pos1, int pos2);
    bool vacia();
    int mayor();
    void imprimir();
    int posMayor();
    bool ordenada();
    bool existe(int x);
};

ListaGenerica::ListaGenerica(){
    raiz = NULL;
}

ListaGenerica::~ListaGenerica(){
    Nodo *aux = raiz;
    Nodo *aux2;
    while(aux != NULL){
        aux2 = aux;
        aux = aux->sig;
        delete aux2;
    }
}

int ListaGenerica::cantidad(){
    Nodo *aux = raiz;
    int cant = 0;
    while(aux != NULL){
        cant++;
        aux = aux->sig;
    }
    return cant;
}

void ListaGenerica::insertar(int y, int x){
    if(y <= cantidad() + 1){
        Nodo *n = new Nodo();
        n->info = x;
        if(y == 1){
            n->sig = raiz;
            raiz = n;
        }else{
            if(y == cantidad() + 1){
                Nodo *n2 = raiz;
                while(n2->sig != NULL){
                    n2 = n2->sig;
                }
                n2->sig = n;
                n->sig = NULL;
            }else if(y == cantidad()){
                    Nodo *atras = raiz;
                    Nodo *reco = raiz->sig;
                    while (reco->sig != NULL) 
                    {
                        atras = reco;
                        reco = reco->sig;
                    }
                    n->sig = atras->sig;
                    atras->sig = n;
                }else{
                Nodo *n2 = raiz;
                for(int i = 1; i <= y - 2; y++){
                    n2 = n2->sig;
                }
                Nodo *siguiente = n2->sig;
                n2->sig = n;
                n->sig = siguiente;
            }
        }
    }
}

void ListaGenerica::borrar(int y){
    if(y <= cantidad()){
        Nodo *n;
        if(y == 1){
            n = raiz;
            raiz = raiz->sig;
        }else{
            Nodo *n2;
            n2 = raiz;
            for(int i = 1; i <= y - 2; i++){
                n2 = n2->sig;
            }
            Nodo *prox = n2->sig;
            n2->sig = prox->sig;
            n = prox;
        }
        delete n;
    }
}

bool ListaGenerica::vacia(){
    if(raiz == NULL)
        return true;
    else
        return false;
}

int ListaGenerica::mayor(){
    if(!vacia()){
        int may = raiz->info;
        Nodo *n = raiz->sig;
        while( n != NULL){
            if(n->info > may){
                may = n->info;
            }
            n = n->sig;
        }
        return may;
    }else{
        return -1;
    }
}


void ListaGenerica::imprimir(){
    Nodo *aux = raiz;
    cout << "Listado completo: \n";
    while(aux != NULL){
        cout << aux->info << " - ";
        aux = aux->sig;
    }
    cout << "\n";
}

int main(){
    int p, n, elim, cantidad, mayor;
    ListaGenerica *l1 = new ListaGenerica();
    cout << "Cuanto elementos desea ingresar? ";
    cin >> cantidad;
    cout << "\n";
    for(int i = 0; i < cantidad; i++){
        cout << "Ingrese el elemento " << cantidad-i << " de la lista: \n";
        cin >> n;
        l1->insertar(1,n);
    }
    l1->imprimir();
    cout << "La cantidad de nodos es de " << l1->cantidad() << ".\n";
    do{
        cout << "Ingrese un valor entero y una posicion. Ingrese -1 para finalizar. \n";
        cin >> n;
        cin >> p;
        l1->insertar(p,n);
        l1->imprimir();
        cout << "La cantidad de nodos es de " << l1->cantidad() << ".\n";
    }while(n != -1);
    do{
        cout << "Cual nodo desea eliminar? Ingrese su posicion. Ingrese -1 para dejar de eliminar: ";
        cin >> elim;
        l1->borrar(elim);
        l1->imprimir();
        cout << "La cantidad de nodos es de " << l1->cantidad() << ".\n";
    }while(elim != -1);
    cout << "El nodo con informacion mayor es: " << l1->mayor() << ".\n";
    mayor = l1->mayor();
    cout << "La lista final sin el nodo mayor es: \n";
    l1->borrar(mayor);
    l1->imprimir();
    delete l1;
    cin.get();
    cin.get();
    return 0;
}