/*mprimir la información de una lista simplemente encadenada de atrás para adelante.*/

#include <iostream>

using namespace std;

class ListaGenerica {
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };
    Nodo *raiz;
    void imprimir(Nodo *reco);
public:
    ListaGenerica();
    ~ListaGenerica();
    void insertarPrimero(int x);
    void imprimir();
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
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


void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::imprimir()
{
    imprimir(raiz);
}

void ListaGenerica::imprimir(Nodo *reco)
{
    if (reco != NULL) 
    {
        imprimir(reco->sig);
        cout<<reco->info << "-";
    }
}

int main()
{
    ListaGenerica *lg = new ListaGenerica();
    lg->insertarPrimero(10);
    lg->insertarPrimero(4);
    lg->insertarPrimero(5);
    lg->imprimir();
    delete lg;
    cin.get();
    cin.get();
    return 0;
}