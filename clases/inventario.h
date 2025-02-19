#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
using namespace std;

class Inventario{
private:
    string id, nombre, categoria;
    int cantidad; 
    double precio;
    bool estado;
public:
    Inventario(string ID, string Nombre, string Categoria,int Cantidad, double Precio, bool Estado);
    string getID();
};

#endif