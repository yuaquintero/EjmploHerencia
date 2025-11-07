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
    EmpleadoHoras(string nombre, string apellido, int documento,
                  float numHoras,float valorHora );
    float CalcularSalario() override;
    string MostrarInformacion() override;
};

#endif // EMPLEADOHORAS_H
