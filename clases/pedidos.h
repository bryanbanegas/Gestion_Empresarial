#ifndef PEDIDOS_H
#define PEDIDOS_H

#include <string>
#include <vector>
using namespace std;

class Pedidos{
private:
    string id, cliente, fecha;
    vector<string> productosSolicitados;
    bool estado;
public:
    Pedidos(string ID, string cliente, string Fecha, bool Estado){}
    string getID();
};

#endif