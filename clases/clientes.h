#ifndef CLIENTES_H
#define CLIENTES_H

#include <string>
#include <vector>
using namespace std;

class Clientes{
private:
    string id, nombre, correo, telefono;
    vector<string> historialCompras;
    double saldo;
public:
    Clientes(string ID, string Nombre, string Correo, string telefono, double Saldo);
    string getID();
};

#endif