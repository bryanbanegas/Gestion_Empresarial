#include "clientes.h"

Clientes::Clientes(int num){
    numeroClaves=0;
    hoja=true;
    claves=new datosClientes[(2*num)-1];
    hijos=new Clientes*[(2*num)];
}

void Clientes::imprimir(){
    for(int i=0;i<numeroClaves;i++){
        cout<<"ID: "<<claves[i].id<<" Nombre: "<<claves[i].nombre<<endl;
    }
}