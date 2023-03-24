/*Desarrollar una clase para la administración de un árbol binario ordenado.*/

#include <iostream>

using namespace std;

class ArbolBinario {
private:
    class Nodo {
    public:
        int info;
        Nodo *izq;
        Nodo *der;
    };
    Nodo *raiz;
    void borrar(Nodo *reco);
    void imprimirPre(Nodo *reco);
    void imprimirEntre(Nodo *reco);
    void imprimirPost(Nodo *reco);
public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    void imprimirPre();
    void imprimirEntre();
    void imprimirPost();
};

ArbolBinario::ArbolBinario()
{
    raiz = NULL;
}

ArbolBinario::~ArbolBinario()
{
    borrar(raiz);
}

void ArbolBinario::borrar(Nodo *reco)
{
    if (reco != NULL)
    {
        borrar(reco->izq);
        borrar(reco->der);
        delete reco;
    }
}

void ArbolBinario::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    if (raiz == NULL)
        raiz = nuevo;
    else
    {
        Nodo *anterior, *reco;
        anterior = NULL;
        reco = raiz;
        while (reco != NULL)
        {
            anterior = reco;
            if (x < reco->info)
                reco = reco->izq;
            else
                reco = reco->der;
        }
        if (x < anterior->info)
            anterior->izq = nuevo;
        else
            anterior->der = nuevo;
    }
}

void ArbolBinario::imprimirPre()
{
    imprimirPre(raiz);
    cout << "\n";
}

void ArbolBinario::imprimirPre(Nodo *reco)
{
    if (reco != NULL)
    {
        cout << reco->info << "-";
        imprimirPre(reco->izq);
        imprimirPre(reco->der);
    }
}

void ArbolBinario::imprimirEntre()
{
    imprimirEntre(raiz);
    cout << "\n";
}

void ArbolBinario::imprimirEntre(Nodo *reco)
{
    if (reco != NULL)
    {
        imprimirEntre(reco->izq);
        cout << reco->info << "-";
        imprimirEntre(reco->der);
    }
}

void ArbolBinario::imprimirPost()
{
    imprimirPost(raiz);
    cout << "\n";
}

void ArbolBinario::imprimirPost(Nodo *reco)
{
    if (reco != NULL)
    {
        imprimirPost(reco->izq);
        imprimirPost(reco->der);
        cout << reco->info << "-";
    }
}


int main()
{
    ArbolBinario *arbol = new ArbolBinario();
    arbol->insertar(100);
    arbol->insertar(50);
    arbol->insertar(25);
    arbol->insertar(75);
    arbol->insertar(150);
    cout<<"Impresion preorden: ";
    arbol->imprimirPre();
    cout<<"Impresion entreorden: ";
    arbol->imprimirEntre();
    cout<<"Impresion postorden: ";
    arbol->imprimirPost();
    delete arbol;
    cin.get();
    cin.get();
    return 0;
}