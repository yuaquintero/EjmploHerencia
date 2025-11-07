#include "empleado.h"

Empleado::Empleado() {}

Empleado::Empleado(string nombre, string apellido, int documento, float salario)
{
    this->nombre=nombre;
    this->apellido=apellido;
    this->documento =documento;
    this->salario=salario;
}

float Empleado::CalcularSalario()
{
    return salario;
}

string Empleado::MostrarInformacion()
{
    return "Nombre completo: "+nombre+" "+apellido+"\nDocumento: "
           +documento+"\nSalario: "+salario;
}
