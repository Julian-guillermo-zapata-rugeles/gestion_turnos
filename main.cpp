#include <iostream>
#include <controlador.h>
#include <string>
using namespace std;


void menu();

int main()
{
    Controlador *controller = new Controlador();
    string user_election;
    while (true) {
        menu();
        getline(cin,user_election);
        if (user_election=="1") {
            controller->PanelInformacion();
        }
        else if (user_election=="2") {
            controller->agregarTurno();
        }
    }
    return 0;
}






void menu(){
    cout << "------------------------------" << endl;
    cout << endl;
    cout << " SISTEMA DE GESTION DE TURNOS " << endl;
    cout << endl;
    cout << "------------------------------" << endl;
    cout << "1 para ver reporte            " << endl;
    cout << "2 para agregar turno          " << endl;
    cout << "3 para atender turno          " << endl;
    cout << endl;
}
