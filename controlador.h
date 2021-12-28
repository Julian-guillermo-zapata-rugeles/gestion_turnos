#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>
#include <vector>
#include <string>
#include <persona.h>

using namespace std;

class Controlador
{
public:
    Controlador();
    void agregarTurno  (void); // ok
    void iniciarTurno  (void); // ok
    void aplazarTurno  (void);
    void finalizarTurno(void);
    void PanelInformacion(void);

private:
    Persona *turnoActivo;
    unsigned int *turnos_pendientes;
    vector <Persona>lista_turnos;

};

#endif // CONTROLADOR_H
