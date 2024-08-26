#include "nodo.h"
//Garcia Guerrero Daniel

Nodo::Nodo()
{

    sig=nullptr;

}

Nodo::Nodo(string dato,Nodo *sig)
{
    this->dato=dato;
    this->sig=sig;
}

