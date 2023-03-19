/*Hacer el gráfico de la memoria e indicar que se imprime en pantalla al ejecutar este programa:*/
#include<iostream>

using namespace std;

int main()
{
    int x1 = 50;
    int x2 = 100;
    int *pun1, *pun2;
    pun1 = &x1;
    pun2 = pun1;
    *pun1 = 2000;
    cout << x1;
    cout << "\n";
    cout << x2;
    cout << "\n";
    cout << *pun1;
    cout << "\n";
    cout << *pun2;
    cout << "\n";
    pun2 = &x2;
    x1 = 1;
    x2 = 2;
    cout << *pun1;
    cout << "\n";
    cout << *pun2;
    cout << "\n";
    *pun1 = 500;
    *pun2 = 600;
    cout << x1;
    cout << "\n";
    cout << x2;
    cin.get();
    cin.get();
    return 0;
}

/*
int x1=50;             
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000           50             x1
int x2=100;                          
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000           50             x1
                          1004          100             x2
int *pun1,*pun2;
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000           50             x1
                          1004          100             x2
                          1008                          pun1
                          1012                          pun2
 pun1 = &x1;                          
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000           50             x1
                          1004          100             x2
                          1008         1000             pun1
                          1012                          pun2
pun2 = pun1;
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000           50             x1
                          1004          100             x2
                          1008         1000             pun1
                          1012         1000             pun2
*pun1 = 2000;
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000         2000             x1
                          1004          100             x2
                          1008         1000             pun1
                          1012         1000             pun2
 pun2 = &x2;
                      Dir. de Mem.    Contenido    Nombre de variable
                          1000         2000             x1
                          1004          100             x2
                          1008         1000             pun1
                          1012         1004             pun2
 x1 = 1;
                       Dir. de Mem.    Contenido    Nombre de variable
                          1000            1             x1
                          1004          100             x2
                          1008         1000             pun1
                          1012         1004             pun2
x2 = 2;
                       Dir. de Mem.    Contenido    Nombre de variable
                          1000            1             x1
                          1004            2             x2
                          1008         1000             pun1
                          1012         1004             pun2
*pun1 = 500;
                       Dir. de Mem.    Contenido    Nombre de variable
                          1000          500             x1
                          1004            2             x2
                          1008         1000             pun1
                          1012         1004             pun2
*pun2 = 600;
                       Dir. de Mem.    Contenido    Nombre de variable
                          1000          500             x1
                          1004          600             x2
                          1008         1000             pun1
                          1012         1004             pun2
*/