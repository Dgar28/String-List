#ifndef LISTA_H
#define LISTA_H
#include"nodo.h"
#include<iostream>
#include<string>
//Garcia Guerrero Daniel
using namespace std;
//Plantilla clase lista
class Lista

{
    public:
        Lista();
        Lista(Nodo*);
        string dato;
        int cont=0;
        Nodo *h;

        void insertarInicio(string);
        void insertarFinal(string);
        void buscar(string);
        bool vacia();
        void vaciarlst();
        void eliminarInicio();
        void eliminarFinal();
        int tamano();
        void mostrar();
        void eliminar(string);
        void mostrarPrimero();
        void mostrarUltimo();
};
#endif // LISTA_H
