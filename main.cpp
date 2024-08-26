#include <iostream>
#include"lista.h"
#include"nodo.h"
#include<string>
#include<conio.h>
#include<cstring>
//Garcia Guerrero Daniel
using namespace std;

int main(){
    Lista *lis=new Lista();
    string y;
    int jup, cont = 0;
    //int d = 0;
    Nodo*aux=new Nodo;

do{
        cout<<"\n"<<endl;
        cout<<"Hola, elige una funcion" <<endl;
        cout<<"Decide cual" <<endl;
        cout<<"1 Insertar inicio"<<endl;
        cout<<"2 Insertar final"<<endl;
        cout<<"3 Mostrar"<<endl;
        cout<<"4 Vacia"<<endl;
        cout<<"5 Buscar"<<endl;
        cout<<"6 Mostrar Ultimo"<<endl;
        cout<<"7 Eliminar final"<<endl;
        cout<<"8 tamano"<<endl;
        cout<<"9 Eliminar"<<endl;
        cout<<"10 Mostrar Primero"<<endl;
        cout<<"11 Eliminar Inicio "<<endl;
        cout<<"12 Vaciar"<<endl;
        cout<<"13 Fin programa"<<endl;
        cout<<"\n";
        cin>>jup;
    switch(jup){
    case 1:
        cout<<" Escribe: ";
        cin>>y;


        lis->insertarInicio(y);
        break;
    case 2:
        cout<<" Escribe:  ";
        cin>>y;


        lis->insertarFinal(y);
        break;
    case 3:
        lis->mostrar();
        break;
    case 4:
        lis->vacia();
        break;
    case 5:
     cout<<" Escribe: ";
        cin>>y;

        lis->buscar(y);
        break;

    case 6:
        lis->mostrarUltimo();
        break;
    case 7:
    lis->eliminarFinal();
    break;
    case 8:
        lis->tamano();
    break;
    case 9:
        lis->eliminar(y);
    break;
    case 10:
        lis->mostrarPrimero();
        break;
    case 11:
        lis->eliminarInicio();
        break;
    case 12:
        lis->vaciarlst();
        break;
    case 13:
        cout<<"Fin programa"<<endl;
        return 0;
        break;
    default:
        cout<<"Funcion no valida"<<endl;
        return 0;
    }
}while(jup!=14);

}
