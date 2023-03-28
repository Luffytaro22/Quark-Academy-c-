/*Plantear la clase Reloj y definir como atributo la hora, minuto y segundo. En el constructor inicializar los atributos. Definir un método que retorne si son iguales los atributos de dos objetos de tipo Reloj, el método tiene que tener la estructura:

  bool iguales(Reloj r);*/

  #include<iostream>
  #define DETENER cin.get(); cin.get();
using namespace std;
  class Reloj{
        int hora;
        int minuto;
        int segundo;
    public:
        Reloj(int hora, int minuto, int segundo){this->hora = hora; this->minuto = minuto; this->segundo = segundo;};
        bool iguales(Reloj r1){if(r1.hora == hora && r1.minuto == minuto && r1.segundo == segundo){return true;}else{return false;} };
        void imprimir(){cout << hora << ":" << minuto << ":" << segundo << ".\n";};
  };

  int main(){
    Reloj reloj1(11,30,0);
    Reloj reloj2(11,30,0);
    reloj1.imprimir();
    reloj2.imprimir();
    if(reloj1.iguales(reloj2)){
        cout << "Tienen la misma hora. \n";
    }else{
        cout << "No tienen la misma hora. \n";
    }
    DETENER
    return 0;
  }

  
