#ifndef EMPLEADOHORAS_H
#define EMPLEADOHORAS_H
#include <empleado.h>


class EmpleadoHoras : public Empleado
{

    //atributos
    float numHoras;
    float valorHora;

public:
    EmpleadoHoras();
    float CalcularSalario() override;
};

#endif // EMPLEADOHORAS_H
