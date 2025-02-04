#include "empleados.h"

Empleados::Empleados(string ID, string Nombre, string Departamento, string Puesto, double Salario, bool Estado){
    id=ID;
    nombre=Nombre;
    departamento=Departamento; 
    puesto=Puesto;
    salario=Salario;
    estado=Estado;
}

string Empleados::getID(){
    return id;
}