#include <iostream>
#include <empleado.h>
#include <vector>
#include <empleadofijo.h>
#include <empleadohoras.h>


using namespace std;

int main()
{
    // se crea un vector para guardar los empleados,
    //es un puntero porque los crearemos de manera dinamica

    vector<Empleado*> empleados;

    empleados.push_back(new Empleado("Luis","Rojas",12345,1250000));
    empleados.push_back(new EmpleadoFijo ("Ana","Mejia",2222,2000000));

    for(int i=0; i<empleados.size(); i++){
        cout<<"***************************"<<endl;
        cout<<"**** Empleado "<<i+1<<"***"<<endl;
        empleados[i]->CalcularSalario();
        cout <<  empleados[i]->MostrarInformacion()<<endl;
        cout<<"***************************"<<endl;
    }
    return 0;
}
