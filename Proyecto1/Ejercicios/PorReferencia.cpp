/*Volver a codificar el problema anterior pero ahora al método iguales hacer que llegue como referencia el parámetro (agregamos el modificador const ya que no tenemos que modificar el objeto que le pasamos como referencia):

  bool iguales(const Reloj &r);*/

   #include<iostream>
  #define DETENER cin.get(); cin.get();
using namespace std;
  class Reloj{
        int hora;
        int minuto;
        int segundo;
    public:
        Reloj(int hora, int minuto, int segundo){this->hora = hora; this->minuto = minuto; this->segundo = segundo;};
        bool iguales(const Reloj &r1){if(r1.hora == hora && r1.minuto == minuto && r1.segundo == segundo){return true;}else{return false;} };
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