#include "controlador.h"

Controlador::Controlador()
{

}


void Controlador::agregarTurno(void)
{
    // creamos una instancia temporal
    Persona *tmp = new Persona;

    // actualizamos sus datos
    tmp->actualizarDatos();

    this->lista_turnos.push_back(*tmp);

    // eliminamos liberando memoria
    delete tmp;

}




void Controlador::PanelInformacion()
{
    cout << "-------------------------------" << endl;
    cout << "       Turnos en espera        " << endl;
    cout << "-------------------------------" << endl;
    cout << endl;
    for (auto it : this->lista_turnos ) {
        it.mostrarDatos();
    }

}
