#include "lista.h"
#include "nodo.h"
#include <iostream>
#include <string>
//Garcia Guerrero Daniel
using namespace std;
Lista::Lista( Nodo *nodoInicio) //inicializar
{
    h=nodoInicio;

}
void Lista::vaciarlst(){
    Nodo *aux=nullptr;

    while(h!=nullptr){
        aux=h;
        h=h->sig;
        delete aux;
        Lista::cont--;
    }
}
Lista::Lista()
{
    h=nullptr;
    //ctor
}

void Lista::insertarFinal(string y)
{
    Nodo*aux=new Nodo(y,nullptr);
    Nodo*tmp=h;

    if(!tmp)    //
    {
        h=aux;
    }
    else
    {
        while(tmp->sig!=nullptr)
        {
            tmp=tmp->sig;
        }
        tmp->sig=aux;
        Lista::cont++;
    }
}
int vacia() {

return vacia ==nullptr;
cout<<"Lista vacia.."<<endl;
}

 int Lista::tamano(){
    Nodo *tmp=h;
    int cont=0;
    while(tmp){
        tmp=tmp->sig;
        cont++;
    }
    return cont;
}

void Lista::mostrarUltimo(){
    Nodo *tmp=h;
    if(tmp==nullptr)
        cout<<"Lista esta vacia" <<endl;
    else{
        while(tmp->sig!=nullptr){
            tmp=tmp->sig;
        }
        cout<<tmp->dato<<endl;
    }
}

void Lista::insertarInicio (string y)
{
    Nodo*aux=new Nodo(y,nullptr);
    if(!h)
    {
        h=aux;
    }
    else
    {
        aux->sig=h;
        h=aux;
        Lista::cont++;
    }
}

void Lista::mostrar(void)
{
    Nodo *tmp=h;
 if(vacia())
    cout<<"Lista vacia..."<<endl;
 else
    while(tmp)
 {
     cout<<tmp->dato<<"\t\n";
     tmp=tmp->sig;
 }
}

bool Lista::vacia(void){
    if(h == nullptr) {
        return true;
    } else {
        return false;

    }
}

void Lista::eliminar(string y)
{
    Nodo *tmp=h;
    Nodo *tmpAnt=nullptr;
    bool band=true;

    if(tmp==nullptr)
        cout<<"lista Vacia!!"<<endl;
    else{
        while(tmp and band)
        {
            if(tmp->dato==y)
            {
                band=false;
            }
            else
            {
                tmpAnt=tmp;
                tmp=tmp->sig;
            }
        }
        if(tmp==nullptr)
        {
            cout<<"Dato no encontrado..."<<endl;
        }
        else if (tmp==h)
        {
            h=h->sig;
            delete tmp;
        }
        else if(tmp->sig==nullptr)
        {
            tmpAnt->sig=nullptr,
            delete tmp;
        }
        else
        {
            tmpAnt->sig=tmp->sig;
            delete tmp;
        }
    }
}
void Lista::mostrarPrimero(){
    Nodo *tmp=h;
    if(tmp==nullptr)
        cout<<"Lista esta vacia" <<endl;
    else{
        cout<<h->dato<<endl;
    }
}
void Lista::eliminarInicio ()
{
    Nodo *tmp=h;
    Nodo *aux= nullptr;

    if(vacia()){
        cout<<"Lista vacia..."<<endl;
    }
    else {
           h = h->sig;
           aux = tmp;
        delete (tmp);
        Lista::cont++;
    }
}

void Lista::buscar(string y)
{
    bool band = false;
    Nodo*aux=new Nodo (y,nullptr);
    aux = h;
    while((aux != nullptr)&&(aux->dato <= y)){
        if(aux->dato == y){
            band=true;
        }
        aux = aux->sig;
    }
    if(band == true){
        cout<<"Elemento "<<y<<" Se encontro en lista\n";
    }
    else{
        cout<<"Elemento "<<y<<" No se encontro en lista\n";
    }
}
void Lista::eliminarFinal ()
{
    Nodo *tmp=h;
    Nodo *aux = nullptr;

    if(!vacia()){
        cout<<"Lista vacia"<<endl;
        while(tmp->sig){
            aux=tmp;
            tmp=tmp->sig;
        }
        if(tmp==h){
            h=h->sig;
            delete(tmp);
            Lista::cont--;
        }
        else{
            aux->sig=nullptr;
            delete(tmp);
            Lista::cont--;
        }
    }

    }
