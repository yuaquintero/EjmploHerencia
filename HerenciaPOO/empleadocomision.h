#ifndef EMPLEADOCOMISION_H
#define EMPLEADOCOMISION_H
#include <empleado.h>

class EmpleadoComision: public Empleado

{
    //atributos
    float ventaTotal;
    float porcentaje;


public:
    EmpleadoComision();
    EmpleadoComision(string nombre, string apellido, int documento,
                     float venta,float porcentaje);
    float CalcularSalario() override;
    string MostrarInformacion() override;
};

#endif // EMPLEADOCOMISION_H
