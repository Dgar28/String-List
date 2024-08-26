#ifndef NODO_H
#define NODO_H
#include"nodo.h"
#include <string>
#include <conio.h>
//Garcia Guerrero Daniel
using namespace std;
class Nodo
{
    public:
        Nodo();
        Nodo(string,Nodo*);
        string dato;
        Nodo *sig;
};



#endif // NODO_H
