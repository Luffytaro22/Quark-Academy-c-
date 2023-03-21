/*Un supermercado tiene tres cajas para la atención de los clientes.
Las cajeras tardan entre 7 y 11 minutos para la atención de cada cliente.
Los clientes llegan a la zona de cajas cada 2 ó 3 minutos. (Cuando el cliente llega, si todas las cajas tienen 6 personas, el cliente se marcha del supermercado)
Cuando el cliente llega a la zona de cajas elige la caja con una cola menor.

Realizar una simulación durante 8 horas y obtener la siguiente información:
a - Cantidad de clientes atendidos por cada caja.
b - Cantidad de clientes que se marcharon sin hacer compras.
c - Tiempo promedio en cola.*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Cola{
    private:
        class Nodo{
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

Cola::Cola(){
    raiz = NULL;
    fondo = NULL;
}

Cola::~Cola(){
    Nodo *rec = raiz;
    Nodo *bor;
    while(rec != NULL){
        bor = rec;
        rec = rec->sig;
        delete bor;
    }
}

void Cola::insertar(int x){
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if(vacia()){
        raiz = nuevo;
        fondo = nuevo;
    }else{
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}

int Cola::extraer(){
    if(!vacia()){
        int inf = raiz->info;
        Nodo *bor = raiz;
        if(raiz == fondo){
            raiz = NULL;
            fondo = NULL;
        }else{
            raiz = raiz->sig;
        }
        delete bor;
        return inf;
    }else{
        return -1;
    }
}

bool Cola::vacia(){
    if(raiz == NULL){
        return true;
    }else{
        return false;
    }
}

int Cola::cantidad(){
    Nodo *reco = raiz;
    int cant = 0;
    while(reco != NULL){
        cant++;
        reco = reco->sig;
    }
    return cant;
}

class Caja{
    public:
        void simulacion();
};

void Caja::simulacion(){
    srand(time(NULL));
    int estado1 = 0, estado2 = 0, estado3 = 0;
    int llegada = rand() % 2 + 2;
    int salida1 = -1, salida2 = -1, salida3 = -1;
    int cantAtendidos1 = 0;
    int cantAtendidos2 = 0;
    int cantAtendidos3 = 0;
    int cantNoAtendidos = 0;
    float tiempoEnCola = 0;
    int cantidadEnCola = 0;
    Cola *cola1 = new Cola();
    Cola *cola2 = new Cola();
    Cola *cola3 = new Cola();
    for(int minuto = 0; minuto < 480; minuto++){
            if(llegada == minuto){
                if(estado1 == 0){
                    estado1 = 1;
                    salida1 = minuto + 7 + rand() % 5;
             
                }else{
                    if(estado2 == 0){
                        estado2 = 1;
                        salida2 = minuto + 7 + rand() % 5;
                    }else{
                        if(estado3 == 0){
                            estado3 = 1;
                            salida3 = minuto + 7 + rand() % 5;
                        }else{
                            if(cola1->cantidad() == 6 && cola2->cantidad() == 6 && cola3->cantidad() == 6){
                                cantNoAtendidos++;
                            }else{
                                if(cola1->cantidad() <= cola2->cantidad() && cola1->cantidad() <= cola3->cantidad()){
                                    cola1->insertar(minuto);
                                }else if(cola2->cantidad() <= cola3->cantidad()){
                                    cola2->insertar(minuto);
                                }else{
                                    cola3->insertar(minuto);
                                }
                            }
                        }
                    }
                }
                llegada = minuto + 2 + rand() % 2;
            }
            if(salida1 == minuto){
                estado1 = 0;
                cantAtendidos1++;
                if(!cola1->vacia()){
                    int m = cola1->extraer();
                    estado1 = 1;
                    salida1 = minuto + 7 + rand() % 5;
                    tiempoEnCola += minuto - m;
                    cantidadEnCola++;
                }
            }
            if(salida2 == minuto){
                estado2 = 0;
                cantAtendidos2++;
                if(!cola2->vacia()){
                    int m = cola2->extraer();
                    estado2 = 1;
                    salida2 = minuto + 7 + rand() % 5;
                    tiempoEnCola += minuto - m;
                    cantidadEnCola++;
                }
            }
            if(salida3 == minuto){
                estado3 = 0;
                cantAtendidos3++;
                if(!cola3->vacia()){
                    int m = cola3->extraer();
                    estado3 = 1;
                    salida3 = minuto + 7 + rand() % 5;
                    tiempoEnCola += minuto - m;
                    cantidadEnCola++;
                }
            } 
    }
    int tiempoPromedio = tiempoEnCola/cantidadEnCola;
    cout << "La cantidad de personas atendidas en cada caja son: \n";
    cout << "Caja 1: " << cantAtendidos1 << ".\n";
    cout << "Caja 2: " << cantAtendidos2 << ".\n";
    cout << "Caja 3: " << cantAtendidos3 << ".\n";
    cout << "Cantidad de clientes que se fueron sin hacer compras: " << cantNoAtendidos << ".\n";
    cout << "El tiempo promedio en cola es de: " << tiempoPromedio << " minutos. \n";
}

int main(){
    Caja *cajeros = new Caja();
    cajeros->simulacion();
    delete cajeros;
    cin.get();
    cin.get();
    return 0;
}