#include "pedidos.h"

Pedidos::Pedidos(string ID, string Cliente, string Fecha, bool Estado){
    id=ID;
    cliente=Cliente; 
    fecha=Fecha;
    estado=Estado;
}

string Pedidos::getID(){
    return id;
}

