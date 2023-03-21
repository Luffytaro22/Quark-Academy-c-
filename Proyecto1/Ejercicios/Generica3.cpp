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
    void imprimir();
    void insertarPrimero(int x);
    void insertarUtlimo(int x);
    void insertarSegundo(int x);
    void insertarAnteUltimo(int x);
    void borrarPrimero();
    void borrarSegundo();
    void borrarUltimo();
    void borrarMayor();
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


void ListaGenerica::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenerica::insertarUtlimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else 
    {
        Nodo *reco = raiz;
        while (reco->sig != NULL) 
        {
            reco = reco->sig;
        }
        reco->sig = nuevo;
    }
}

void ListaGenerica::insertarSegundo(int x)
{
    if (raiz != NULL) 
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (raiz->sig == NULL) 
        {
            //Hay un solo nodo.
            raiz->sig = nuevo;
        }
        else 
        {
            nuevo->sig = raiz->sig;
            raiz->sig = nuevo;
        }
    }
}

void ListaGenerica::insertarAnteUltimo(int x)
{
    if (raiz != NULL) 
    {
        Nodo *nuevo = new Nodo();
        nuevo->info = x;
        if (raiz->sig == NULL) {
            //Hay un solo nodo.
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else 
        {
            Nodo *atras = raiz;
            Nodo *reco = raiz->sig;
            while (reco->sig != NULL) 
            {
                atras = reco;
                reco = reco->sig;
            }
            nuevo->sig = atras->sig;
            atras->sig = nuevo;
        }
    }
}

void ListaGenerica::borrarPrimero()
{
    if (raiz != NULL) 
    {
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
    }
}

void ListaGenerica::borrarSegundo()
{
    if (raiz != NULL) 
    {
        if (raiz->sig != NULL) 
        {
            Nodo *bor = raiz->sig;
            Nodo *tercero = raiz->sig;
            tercero = tercero->sig;
            raiz->sig = tercero;
            delete bor;
        }
    }
}

void ListaGenerica::borrarUltimo()
{
    if (raiz != NULL) 
    {
        if (raiz->sig == NULL) 
        {
            delete raiz;
            raiz = NULL;
        }
        else
        {
            Nodo *reco = raiz->sig;
            Nodo *atras = reco;
            while (reco->sig != NULL) 
            {
                atras = reco;
                reco = reco->sig;
            }
            atras->sig = NULL;
            delete reco;
        }
    }
}

void ListaGenerica::borrarMayor()
{
    if (raiz != NULL) 
    {
        Nodo *reco = raiz;
        int may = raiz->info;
        while (reco != NULL) 
        {
            if (reco->info>may) 
            {
                may = reco->info;
            }
            reco = reco->sig;
        }
        reco = raiz;
        Nodo *atras = raiz;
        Nodo *bor;
        while (reco != NULL) 
        {
            if (reco->info == may)
            {
                if (reco == raiz) 
                {
                    bor = raiz;
                    raiz = raiz->sig;
                    atras = raiz;
                    reco = raiz;
                    delete bor;
                }
                else {
                    atras->sig = reco->sig;
                    bor = reco;
                    reco = reco->sig;
                    delete bor;
                }
            }
            else {
                atras = reco;
                reco = reco->sig;
            }
        }
    }
}


int main()
{
    ListaGenerica *lg = new ListaGenerica();
    lg->insertarPrimero(10);
    lg->insertarPrimero(45);
    lg->insertarPrimero(23);
    lg->insertarPrimero(89);
    lg->imprimir();
    cout<<"Insertamos un nodo al final:\n";
    lg->insertarUtlimo(160);
    lg->imprimir();
    cout<<"Insertamos un nodo en la segunda posición:\n";
    lg->insertarSegundo(13);
    lg->imprimir();
    cout<<"Insertamos un nodo en la anteultima posición:\n";
    lg->insertarAnteUltimo(600);
    lg->imprimir();
    cout<<"Borramos el primer nodo de la lista:\n";
    lg->borrarPrimero();
    lg->imprimir();
    cout<<"Borramos el segundo nodo de la lista:\n";
    lg->borrarSegundo();
    lg->imprimir();
    cout<<"Borramos el ultimo nodo de la lista:\n";
    lg->borrarUltimo();
    lg->imprimir();
    cout<<"Borramos el mayor de la lista:\n";
    lg->borrarMayor();
    lg->imprimir();
    cin.get();
    cin.get();
    return 0;
}