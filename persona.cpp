#include "persona.h"

Persona::Persona()
{

}

void Persona::actualizarDatos()
{
    cout << "----------------------------"<<endl;
    cout << "      Registrando Turno     "<<endl;
    cout << "----------------------------"<<endl;
    cout << endl;
    cout << "Cedula  : ";
    getline(cin,this->cedula);
    cout << "Nombres : ";
    getline(cin,this->nombres);

}

void Persona::mostrarDatos()
{
    cout << endl;
    cout <<" nombre  : " << this->nombres << endl;
    cout <<" cedula  : " << this->cedula << endl;
    cout << endl;
}

Persona::~Persona()
{

}
