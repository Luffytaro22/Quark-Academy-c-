/*Agregar un método a la clase Pila que retorne la información del primer nodo de la Pila sin borrarlo.*/
#include <iostream>

using namespace std;

class Pila {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void insertar(int x);
    int extraer();
    void imprimir();
    int cantidad();
    bool vacia();
    void pilaImprimir();
};

Pila::Pila()
{
    raiz = NULL;
}

void Pila::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void Pila::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

void Pila::pilaImprimir(){
    cout << "El primer nodo tiene la siguiente informacion: ";
    cout << raiz->info;
    cout << "\n";
}

int Pila::extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
}

Pila::~Pila()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

int Pila::cantidad()
{
    Nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

bool Pila::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}



int main()
{
    Pila *pila1;
    pila1= new Pila();
    pila1->insertar(10);
    pila1->insertar(40);
    pila1->insertar(3);
    pila1->imprimir();
    pila1->pilaImprimir();
    cout << "La cantidad de nodos de la pila es:" << pila1->cantidad() << "\n";
    while (pila1->vacia() == false) 
    {
        cout << "Extraemos de la pila:" << pila1->extraer() << "\n";
    }
    delete pila1;
    cin.get();
    cin.get();
    return 0;
}