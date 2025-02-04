#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <string>
using namespace std;

class Empleados{
private:
    string id, nombre, departamento, puesto; 
    double salario;
    bool estado;
public:
    Empleados(string ID, string Nombre, string Departamento, string Puesto, double Salario, bool Estado){}
    string getID();
};

#endif