#include <iostream>
#include <string>
using namespace std;

void agregarEmpleados(){
    string id, nombre, departamento, puesto, opcion="d"; 
    double salario;
    bool estado;
    cout<<"Ingresar ID: ";
    cin>>id;
    cout<<"Ingresar nombre: ";
    cin>>nombre;
    while(opcion!="1"||opcion!="2"){
        cout<<"1. Administracion."<<"\n"
        <<"2. Personal Laboral"<<"\n"
        <<"Ingresar departamento: ";
        cin>>opcion;
        if(opcion=="1"){
            departamento="Administracion";
        }else{
            departamento="Personal Laboral";
        }
    }
    cout<<"Ingresar puesto: ";
    cin>>puesto;
    cout<<"Ingresar salario: ";
    cin>>salario;
}

void agregarCliente(){
    string dato;
    int dat;
    cout<<"Ingresar nombre: ";
    cin>>dato;
}

void administracion(){
    string opcion;
    cout<<"1. Gestion de Ventas"<<"\n"
    <<"2. Gestion de Pedidos"<<"\n"
    <<"Ingresar una opcion: ";
    cin>>opcion;
    if(opcion=="1"){

    }else if(opcion=="2"){

    }else{
        cout<<"Opcion Incorrecta.";
    }
}

void inventario(){
    string opcion;
    cout<<"1. Agregar Producto."<<"\n"
    <<"2. Ver Productos"<<"\n"
    <<"Ingresar una opcion: ";
    cin>>opcion;
    if(opcion=="1"){

    }else if(opcion=="2"){

    }else{
        cout<<"Opcion Incorrecta.";
    }
}

int main(){
    string id,opcion="g",opcionEmpleados="g",opcionClientes="g";

    while(opcion!="3"){
        cout<<"----MENU PRINCIPAL----"<<"\n"
        <<"1. Gestion de Empleados"<<"\n"
        <<"2. Gestion de Clientes"<<"\n"
        <<"3. Salir"<<"\n"
        <<"Ingresar una opcion: ";
        cin>>opcion;
        cout<<endl;
        if(opcion=="1"){
            cout<<"----MENU EMPLEADOS----"<<"\n"
            <<"1. Agregar empleado."<<"\n"
            <<"2. Ingresar ID de empleado."<<"\n"
            <<"Ingresar una opcion: ";
            cin>>opcionEmpleados;
            if(opcionEmpleados=="1"){

            }else if(opcionEmpleados=="2"){
                cout<<"Ingresar ID: ";
                cin>>opcionEmpleados;
                if(id=="administrativo"){
                    administracion();
                }else{
                    inventario();
                }
            }else{
                cout<<"Opcion Incorrecta.";
            }

        }else if(opcion=="2"){
            cout<<"----MENU CLIENTES----"<<"\n"
            <<"1. Agregar cliente."<<"\n"
            <<"2. Hacer un pedido como cliente"<<"\n"
            <<"Ingresar una opcion: ";
            cin>>opcionClientes;
            if(opcionClientes=="1"){
                agregarCliente();
            }else if(opcionClientes=="2"){
                cout<<"Ingresar ID: ";
                cin>>opcionClientes;
                if(id=="administrativo"){
                    administracion();
                }else{
                    inventario();
                }
            }else{
                cout<<"Opcion Incorrecta.";
            }

        }else if(opcion=="3"){
            cout<<"Salio del sistema.";
            
        }else{
            cout<<"Opcion Incorrecta.";
        }
        cout<<endl;
    }
}