#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Cola {
private:
    class Nodo {
    public:
        int info;
        Nodo *sig;
    };

    Nodo *raiz;
    Nodo *fondo;
public:
    Cola();
    ~Cola();
    void insertar(int x);
    int extraer();
    bool vacia();
    int cantidad();
};


Cola::Cola()
{
    raiz = NULL;
    fondo = NULL;
}

Cola::~Cola()
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

void Cola::insertar(int x)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else
    {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}

int Cola::extraer()
{
    if (!vacia())
    {
        int informacion = raiz->info;
        Nodo *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else
        {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

bool Cola::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

int Cola::cantidad()
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


class Supermercado {
public:
    void simulacion();
};

void Supermercado::simulacion()
{
    int estado1 = 0, estado2 = 0, estado3 = 0;
    int marchan = 0;
    int llegada = 2 + rand() % 2;
    int salida1 = -1, salida2 = -1, salida3 = -1;
    int cantAte1 = 0, cantAte2 = 0, cantAte3 = 0;
    int tiempoEnCola = 0;
    int cantidadEnCola = 0;
    Cola *cola1 = new Cola();
    Cola *cola2 = new Cola();
    Cola *cola3 = new Cola();
    srand(time(NULL));
    for (int minuto = 0; minuto < 480; minuto++) 
    {
        if (llegada == minuto) 
        {
            if (estado1 == 0) 
            {
                estado1 = 1;
                salida1 = minuto + 7 + rand() % 5;
            }
            else 
            {
                if (estado2 == 0) 
                {
                    estado2 = 1;
                    salida2 = minuto + 7 + rand() % 5;
                }
                else 
                {
                    if (estado3 == 0) 
                    {
                        estado3 = 1;
                        salida3 = minuto + 7 + rand() % 5;
                    }
                    else 
                    {
                        if (cola1->cantidad() == 6 && cola2->cantidad() == 6 && cola3->cantidad() == 6) 
                        {
                            marchan++;
                        }
                        else 
                        {
                            if (cola1->cantidad() <= cola2->cantidad() && cola1->cantidad() <= cola3->cantidad()) 
                            {
                                cola1->insertar(minuto);
                            }
                            else 
                            {
                                if (cola2->cantidad() <= cola3->cantidad()) 
                                {
                                    cola2->insertar(minuto);
                                }
                                else 
                                {
                                    cola3->insertar(minuto);
                                }
                            }
                        }
                    }
                }
            }
            llegada = minuto + 2 + rand() % 2;
        }
        if (salida1 == minuto) 
        {
            cantAte1++;
            estado1 = 0;
            if (!cola1->vacia()) 
            {
                estado1 = 1;
                int m = cola1->extraer();
                salida1 = minuto + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (minuto - m);
                cantidadEnCola++;
            }
        }
        if (salida2 == minuto) 
        {
            cantAte2++;
            estado2 = 0;
            if (!cola2->vacia()) 
            {
                estado2 = 1;
                int m = cola2->extraer();
                salida2 = minuto + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (minuto - m);
                cantidadEnCola++;
            }
        }
        if (salida3 == minuto) 
        {
            cantAte3++;
            estado3 = 0;
            if (!cola3->vacia()) 
            {
                estado3 = 1;
                int m = cola3->extraer();
                salida3 = minuto + 7 + rand() % 5;
                tiempoEnCola = tiempoEnCola + (minuto - m);
                cantidadEnCola++;
            }
        }
    }
    cout <<"Clientes atendidos por caja: caja1=" <<cantAte1 <<"  caja2=" <<cantAte2 <<"  caja3=" <<cantAte3 <<"\n";
    cout <<"Se marchan sin hacer compras:" <<marchan <<"\n";
    if (cantidadEnCola>0) 
    {
        int tiempoPromedio = tiempoEnCola / cantidadEnCola;
        cout <<"Tiempo promedio en cola:" <<tiempoPromedio <<"\n";
    }
}


int main()
{
    Supermercado *super1;
    super1 = new Supermercado();
    super1->simulacion();
    delete super1;
    cin.get();
    cin.get();
    return 0;
}