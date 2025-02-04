#include "inventario.h"

Inventario::Inventario(string ID, string Nombre, string Categoria, int Cantidad, double Precio, bool Estado){
    id=ID;
    nombre=Nombre;
    categoria=Categoria; 
    cantidad=Cantidad;
    precio=Precio;
    estado=Estado;
}

string Inventario::getID(){
    return id;
}