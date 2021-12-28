#include <iostream>
#include <controlador.h>
#include <string>
#include <cstdlib>
using namespace std;


void menu();

int main()
{
    Controlador *controller = new Controlador();
    controller->iniciarGestionTurnos();
    return 0;
}






