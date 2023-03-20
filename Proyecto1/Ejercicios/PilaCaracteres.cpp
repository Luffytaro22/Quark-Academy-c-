/*Se debe desarrollar una clase que tenga las siguientes responsabilidades (clase Formula):

- Ingresar una fórmula que contenga paréntesis, corchetes y llaves.
- Validar que los ( ) [] y {} estén correctamente balanceados. */

#include <iostream>
#include<string.h>
using namespace std;

class Pila {
private:
    class Nodo {
    public:
        char simbolo;
        Nodo *sig;
    };

    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void insertar(char x);
    char extraer();
    bool vacia();
};

Pila::Pila()
{
    raiz = NULL;
}

void Pila::insertar(char x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->simbolo = x;
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

char Pila::extraer()
{
    if (raiz != NULL)
    {
        char informacion = raiz->simbolo;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return ' ';
    }
}

bool Pila::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
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



class Formula {
    char cadena[100];
public:
    Formula();
    bool balanceada();
};

Formula::Formula()
{
    cout << "Ingrese una formula con parentesis, corchetes y llaves:";
    cin.getline(cadena, 100);
}

bool Formula::balanceada()
{
    Pila *pila1;
    pila1 = new Pila();
    for (int f = 0; f < strlen(cadena); f++)
    {
        if (cadena[f] == '(' || cadena[f] == '[' || cadena[f] == '{') 
        {
            pila1->insertar(cadena[f]);
        }
        else 
        {
            if (cadena[f] == ')') 
            {
                if (pila1->extraer() != '(') 
                {
                    return false;
                }
            }
            else 
            {
                if (cadena[f] == ']') 
                {
                    if (pila1->extraer() != '[') 
                    {
                        return false;
                    }
                }
                else 
                {
                    if (cadena[f] == '}') 
                    {
                        if (pila1->extraer() != '{') 
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
    if (pila1->vacia()) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}


int main()
{
    Formula *formula1;
    formula1 = new Formula();
    if (formula1->balanceada() == true)
    {
        cout << "La formula esta correctamente balanceada";
    }
    else
    {
        cout << "La formula no esta correctamente balanceada";
    }
    delete formula1;
    cin.get();
    cin.get();
    return 0;
}