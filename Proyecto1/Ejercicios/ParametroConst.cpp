
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
    void insertarPrimero(int x);
    void imprimir();
    bool iguales(const ListaGenerica *lista2);
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
    Nodo *reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

bool ListaGenerica::iguales(const ListaGenerica *lista2)
{
    bool iguales = true;
    Nodo *reco1 = raiz;
    Nodo *reco2 = lista2->raiz;
    while (reco1 != NULL && reco2 != NULL)
    {
        if (reco1->info != reco2->info)
        {
            iguales = false;
            break; //salimos del while
        }
        reco1 = reco1->sig;
        reco2 = reco2->sig;
    }
    if (iguales == true && reco1 == NULL && reco2 == NULL)
        return true;
    else
        return false;
}

int main()
{
    ListaGenerica *lg1 = new ListaGenerica();
    lg1->insertarPrimero(10);
    lg1->insertarPrimero(20);
    lg1->insertarPrimero(30);
    lg1->imprimir();

    ListaGenerica *lg2 = new ListaGenerica();
    lg2->insertarPrimero(10);
    lg2->insertarPrimero(20);
    lg2->insertarPrimero(30);
    lg2->imprimir();

    if (lg1->iguales(lg2))
        cout << "Las dos listas son iguales\n";
    else
        cout << "Las dos listas no son iguales\n";

    delete lg1;
    delete lg2;
    cin.get();
    cin.get();
    return 0;
}