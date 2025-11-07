#include "empleado.h"
#include <iomanip>

Empleado::Empleado() {}

Empleado::Empleado(string nombre, string apellido, int documento, float salario)
    :nombre(nombre),apellido(apellido),documento(documento),salario(salario)
{

}

float Empleado::CalcularSalario()
{
    return salario;
}

string Empleado::MostrarInformacion()
{
    string info="Nombre completo: ";
    info+= nombre;
    info+=" "+apellido+" \nDocumento: "+ to_string(documento);
    info+="\nSalario: "+to_string((salario));
    return info;
}
