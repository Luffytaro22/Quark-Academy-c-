/*
1.Cree una clase "Auto" que tenga dos atributos: "marca" y "modelo", ambos de tipo string.
2.En el constructor de la clase, inicialice los atributos con los valores pasados como parámetros.
3.Cree una función "mostrar_datos" que imprima los valores de los atributos "marca" y "modelo" en pantalla.
4.Cree un puntero inteligente de tipo "shared_ptr" para un objeto de la clase "Auto", y asígnelo a un objeto de la clase "Auto" con la marca "Ford" y el modelo "Mustang".
5.Llamar a la función "mostrar_datos" a través del puntero inteligente.*/

#include<iostream>
#include<string>
#include<memory>

using namespace std;

class Auto{
    private:
        std::string marca_;
        std::string modelo_;
    public:
        Auto(std::string marca, std::string modelo):marca_(marca), modelo_(modelo){};
        void mostrar_datos(){
            std::cout << "Marca: " << marca_ << std::endl;
            std::cout << "Modelo: " << modelo_ << std::endl;
        };

};

int main(){
    std::shared_ptr<Auto> auto_ptr = std::make_shared<Auto>("Ford", "Mustang");

    auto_ptr->mostrar_datos();
}