#include "empleadohoras.h"

EmpleadoHoras::EmpleadoHoras() {}

float EmpleadoHoras::CalcularSalario()
{
    salario=numHoras*valorHora;
    return salario;
}
