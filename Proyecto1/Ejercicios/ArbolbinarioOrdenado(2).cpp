/*Confeccionar una clase que permita insertar un entero en un árbol binario ordenado verificando que no se encuentre previamente dicho número.

Desarrollar los siguientes métodos:

1 - Retornar la cantidad de nodos del árbol.

2 - Retornar la cantidad de nodos hoja del árbol.

3 - Imprimir en entre orden.

4 - Imprimir en entre orden junto al nivel donde se encuentra dicho nodo.

5 - Retornar la altura del árbol.

6 - Imprimir el mayor valor del árbol.

7 - Borrar el nodo menor del árbol.*/

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
    int cant;
    int altura;
    void borrar(Nodo *reco);
    void imprimirEntre(Nodo *reco);
    void cantidad(Nodo *reco);
    void cantidadNodosHoja(Nodo *reco);
    void imprimirEntreConNivel(Nodo *reco, int nivel);
    void retornarAltura(Nodo *reco, int nivel);
public:
    ArbolBinario();
    ~ArbolBinario();
    void insertar(int x);
    bool existe(int x);
    void imprimirEntre();
    int cantidad();
    int cantidadNodosHoja();
    void imprimirEntreConNivel();
    int retornarAltura();
    void mayorValor();
    void borrarMenor();
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
    if (!existe(x))
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
}

bool ArbolBinario::existe(int x)
{
    Nodo *reco = raiz;
    while (reco != NULL) 
    {
        if (x == reco->info)
                return true;
        else
            if (x>reco->info)
                reco = reco->der;
            else
                reco = reco->izq;
    }
    return false;
}


int ArbolBinario::cantidad() 
{
    cant = 0;
    cantidad(raiz);
    return cant;
}

void ArbolBinario::cantidad(Nodo *reco) 
{
    if (reco != NULL) 
    {
        cant++;
        cantidad(reco->izq);
        cantidad(reco->der);
    }
}

int ArbolBinario::cantidadNodosHoja() 
{
    cant = 0;
    cantidadNodosHoja(raiz);
    return cant;
}



void ArbolBinario::cantidadNodosHoja(Nodo *reco) 
{
    if (reco != NULL) {
        if (reco->izq == NULL && reco->der == NULL)
            cant++;
        cantidadNodosHoja(reco->izq);
        cantidadNodosHoja(reco->der);
    }
}

void ArbolBinario::imprimirEntreConNivel() 
{
    imprimirEntreConNivel(raiz, 1);
    cout << "\n";
}

void ArbolBinario::imprimirEntreConNivel(Nodo *reco, int nivel)  
{
    if (reco != NULL) {
        imprimirEntreConNivel(reco->izq, nivel + 1);
        cout<<reco->info <<"(" <<nivel <<") - ";
        imprimirEntreConNivel(reco->der, nivel + 1);
    }
}

int ArbolBinario::retornarAltura() 
{
    altura = 0;
    retornarAltura(raiz, 1);
    return altura;
}

void ArbolBinario::retornarAltura(Nodo *reco, int nivel)    
{
    if (reco != NULL) 
    {
        retornarAltura(reco->izq, nivel + 1);
        if (nivel>altura)
            altura = nivel;
        retornarAltura(reco->der, nivel + 1);
    }
}

 void ArbolBinario::mayorValor()
 {
    if (raiz != NULL) 
    {
        Nodo *reco = raiz;
        while (reco->der != NULL)
            reco = reco->der;
        cout<<"Mayor valor del árbol:" <<reco->info;
    }
}

void ArbolBinario::borrarMenor() 
{
     if (raiz != NULL) {
         Nodo *bor;
         if (raiz->izq == NULL)
         {
             bor = raiz;
             raiz = raiz->der;
             delete bor;
         }
         else {
             Nodo *atras = raiz;
             Nodo *reco = raiz->izq;
             while (reco->izq != NULL) 
             {
                 atras = reco;
                 reco = reco->izq;
             }
             atras->izq = reco->der;
             delete reco;
         }
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

int main()
{
    ArbolBinario *arbol1 = new ArbolBinario();
    arbol1->insertar(100);
    arbol1->insertar(50);
    arbol1->insertar(25);
    arbol1->insertar(75);
    arbol1->insertar(150);
    cout<<"Impresion entreorden: ";
    arbol1->imprimirEntre();
    cout<<"Cantidad de nodos del árbol:" <<arbol1->cantidad() <<"\n";
    cout<<"Cantidad de nodos hoja:" <<arbol1->cantidadNodosHoja()<<"\n";
    cout<<"Impresion en entre orden junto al nivel del nodo:";
    arbol1->imprimirEntreConNivel();
    cout<<"Artura del arbol:";
    cout << arbol1->retornarAltura();
    cout << "\n";
    arbol1->mayorValor();
    cout << "\n";
    arbol1->borrarMenor();
    cout<<"Luego de borrar el menor:";
    arbol1->imprimirEntre();
    delete arbol1;
    cin.get();
    cin.get();
    return 0;
}