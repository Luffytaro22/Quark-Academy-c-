#include <iostream>

using namespace std;

class ListaGenericaOrdenada {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    ListaGenericaOrdenada();
    ~ListaGenericaOrdenada();    
    void insertar(int x);
    void imprimir();
};

ListaGenericaOrdenada::ListaGenericaOrdenada()
{
    raiz = NULL;
}

ListaGenericaOrdenada::~ListaGenericaOrdenada()
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

void ListaGenericaOrdenada::insertar(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL) 
    {
        raiz = nuevo;
    }
    else 
    {
        if (x<raiz->info) 
        {
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else 
        {
            Nodo *reco = raiz;
            Nodo *atras = raiz;
            while (x >= reco->info && reco->sig != NULL) 
            {
                atras = reco;
                reco = reco->sig;
            }
            if (x >= reco->info) 
            {
                reco->sig = nuevo;
            }
            else
            {
                nuevo->sig = reco;
                atras->sig = nuevo;
            }
        }
    }
}

void ListaGenericaOrdenada::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}


int main()
{
    int y;
    ListaGenericaOrdenada *lista = new ListaGenericaOrdenada();
    for(int i = 0; i < 5; i++){
        cout << "Ingrese un valor de la lista: ";
        cin >> y;
        lista->insertar(y);
        lista->imprimir();
    }
    delete lista;
    cin.get();
    cin.get();
    return 0;
}