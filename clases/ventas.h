#ifndef VENTAS_H
#define VENTAS_H

#include <string>
#include <vector>
using namespace std;

class Ventas{
private:
    string idVenta, idCliente, fecha;
    vector<string> productosVendidos;
    int cantidad;
    double total;
public:
    Ventas(string IDVenta, string IDCliente, string Fecha, int Cantidad, double Total){}
    string getIDVenta();
    string getIDCliente();
};

#endif