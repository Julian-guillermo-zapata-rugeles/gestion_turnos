#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>
#include <vector>
#include <string>
#include <persona.h>
#include <cstdlib>


using namespace std;

class Controlador
{
public:
    Controlador();
    void iniciarGestionTurnos(void);



private:
    Persona *turnoActivo;
    unsigned int *turnos_pendientes;
    vector <Persona>lista_turnos;
    string tmp;

    void menu();
    void pausar();
    void banner(string mensaje);
    void iniciarTurno_feedback();
    void agregarTurno  (void); // ok
    void iniciarTurno  (void); // ok
    void aplazarTurno  (void);
    void finalizarTurno(void);
    void PanelInformacion(void); // ok

};

#endif // CONTROLADOR_H
