#include "ventas.h"

Ventas::Ventas(string IDVenta, string IDCliente, string Fecha, int Cantidad, double Total){
    idVenta=IDVenta;
    idCliente=IDCliente;
    fecha=Fecha; 
    cantidad=Cantidad;
    total=Total;
}

string Ventas::getIDVenta(){
    return idVenta;
}

string Ventas::getIDCliente(){
    return idCliente;
}