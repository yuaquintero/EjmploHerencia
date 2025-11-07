#include "empleadofijo.h"

EmpleadoFijo::EmpleadoFijo(string nombre, string apellido,
                           int documento, float salario):
    Empleado(nombre,apellido,documento, salario)
{

}

string EmpleadoFijo::MostrarInformacion()
{
    string info= Empleado::MostrarInformacion();

    info+="\nTipo empleado: Fijo";

    return info;
}
