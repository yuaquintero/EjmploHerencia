#include <iostream>
#include <empleado.h>
#include <vector>
#include <empleadofijo.h>
#include <empleadohoras.h>
#include <empleadocomision.h>


using namespace std;

int main()
{
    // se crea un vector para guardar los empleados,
    //es un puntero porque los crearemos de manera dinamica
    vector<Empleado*> empleados;
    empleados.push_back(new Empleado("Luis","Rojas",12345,1250000));    //creamos un primer empleado de tipo empleado
    empleados.push_back(new EmpleadoFijo ("Ana","Mejia",2222,2000000));  //creamos un segundo empleado de tipo fijo
    empleados.push_back(new EmpleadoHoras("Miguel", "Lopez",23901,47,56000)); // creamos un empleado por horas
    empleados.push_back(new EmpleadoComision("Maria","Perez",33333,25000000,5)); // creamos un empleado por comision
    for(int i=0; i<empleados.size(); i++){
        cout<<"***************************"<<endl;
        cout<<"**** Empleado "<<i+1<<"***"<<endl;
        empleados[i]->CalcularSalario();
        cout <<  empleados[i]->MostrarInformacion()<<endl;
        cout<<"***************************"<<endl;
    }
    return 0;
}
