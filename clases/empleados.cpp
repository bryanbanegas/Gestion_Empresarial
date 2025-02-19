#include "empleados.h"

Empleados::Empleados(int num){
    numeroClaves=0;
    hoja=true;
    claves=new datosEmpleados[(2*num)-1];
    hijos=new Empleados*[(2*num)];
}

void Empleados::imprimir(){
    for(int i=0;i<numeroClaves;i++){
        cout<<"ID: "<<claves[i].id<<" Nombre: "<<claves[i].nombre<<endl;
    }
}