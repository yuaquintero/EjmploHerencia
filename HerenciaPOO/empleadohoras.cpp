#include "empleadohoras.h"

EmpleadoHoras::EmpleadoHoras() {}

/*Este contructor de la clase hija
inicializa los atributos de la clase base con los primero 4 valores
y los otros dos valore se las pasa a la clase hija
*/
EmpleadoHoras::EmpleadoHoras(string nombre, string apellido, int documento,
                             float numHoras,float valorHora):
    Empleado(nombre,apellido,documento, 0),
    numHoras(numHoras),valorHora(valorHora)
{

}

float EmpleadoHoras::CalcularSalario()
{
    salario=numHoras*valorHora;
    return salario;
}

string EmpleadoHoras::MostrarInformacion()
{
    //usaremos parte de la definicon del metodo de la clase base y
    //la completamos en la clase hija
    string info= Empleado::MostrarInformacion();

    info+="\nTipo empleado: Por horas \n"
            "Valor hora: "+to_string(valorHora)+
            "\nHoras trabajadas: "+to_string(numHoras);

    return info;
}
