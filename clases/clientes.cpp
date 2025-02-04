#include "clientes.h"

Clientes::Clientes(string ID, string Nombre, string Correo, string Telefono, double Saldo){
    id=ID;
    nombre=Nombre;
    correo=Correo; 
    telefono=Telefono;
    saldo=Saldo;
}

string Clientes::getID(){
    return id;
}