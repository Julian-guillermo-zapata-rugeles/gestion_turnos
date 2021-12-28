#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
using namespace std;


class Persona
{
public:
    Persona();
    void actualizarDatos(void);
    void mostrarDatos(void);
    ~Persona();

private:
    string nombres;
    string cedula ;
};


#endif // PERSONA_H
