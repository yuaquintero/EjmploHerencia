#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

using namespace std;
class Empleado
{

protected:
    //atributos
    string nombre;
    string apellido;
    int documento;
    float salario;

public:
    Empleado();
    Empleado(string nombre, string apellido, int documento, float salario);
   // virtual float CalcularSalario()const=0; //Metodo virtual puro
    virtual float CalcularSalario(); //metodo virtual
    virtual string MostrarInformacion();

};

#endif // EMPLEADO_H
