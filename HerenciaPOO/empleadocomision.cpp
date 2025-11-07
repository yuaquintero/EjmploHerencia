#include "empleadocomision.h"

EmpleadoComision::EmpleadoComision() {}

EmpleadoComision::EmpleadoComision(string nombre, string apellido, int documento, float venta, float porcentaje)
    :Empleado(nombre,apellido, documento,0),ventaTotal(venta), porcentaje(porcentaje)
{

}

float EmpleadoComision::CalcularSalario()
{
    salario= ventaTotal*(porcentaje/100);
    return salario;
}

string EmpleadoComision::MostrarInformacion()
{
    string info= Empleado::MostrarInformacion();

    info+="\nTipo empleado: Por comisión \n"
            "Venta total: "+to_string(ventaTotal)+
            "\nPorcentaje por venta: "+to_string(porcentaje);

    return info;
}
