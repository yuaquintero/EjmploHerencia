#ifndef EMPLEADOFIJO_H
#define EMPLEADOFIJO_H
#include <empleado.h>

class EmpleadoFijo : public Empleado
{
public:

    EmpleadoFijo(string nombre, string apellido, int documento, float salario);

};

#endif // EMPLEADOFIJO_H
