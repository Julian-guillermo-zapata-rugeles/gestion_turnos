#include "controlador.h"

Controlador::Controlador()
{

}




void Controlador::menu(){
    this->banner("SISTEMA GESTION TURNOS");
    cout << "1 para ver reporte   " << endl;
    cout << "2 para agregar turno " << endl;
    cout << "3 para atender turno " << endl;
    cout << endl;
}







void Controlador::pausar()
{
    cout << "ENTER --> ";
    getline(cin,this->tmp);
}








void Controlador::iniciarGestionTurnos()
{
    string user_election;
    while (true) {
        menu();
        getline(cin,user_election);


        if (user_election=="1") {
            this->PanelInformacion();
        }


        else if (user_election=="2") {
            this->agregarTurno();
        }



        else if (user_election=="3"){
            this->iniciarTurno();

        }
    }
}






void Controlador::banner(string mensaje)
{
    system("clear");
    cout <<" --------------------------------------- "<< endl;
    cout << "    " << mensaje << endl;
    cout <<" --------------------------------------- "<< endl;
    cout << endl;
}







void Controlador::iniciarTurno_feedback()
{
    cout << endl;
    cout << "¿paciente fue atendido?"<<endl;
    cout << endl;
    cout << " ( S/s )   para SI " << endl;
    cout << " ( N/n )   para NO " << endl;
    cout << endl;
    cout << "  >>  ";
    getline(cin,tmp);
    if (tmp=="s") {
        this->finalizarTurno();
    }
    else{
        this->aplazarTurno();
    }
}






void Controlador::agregarTurno(void)
{
    this->banner("DATOS PERSONALES");
    Persona *tmp = new Persona;
    tmp->actualizarDatos();
    this->lista_turnos.push_back(*tmp);
    delete tmp;

}




void Controlador::iniciarTurno()
{

    string tmp;
    if (!this->lista_turnos.empty()) {
        this->turnoActivo = &this->lista_turnos.at(0);
        this->banner("ATENCION EN PROCESO");
        this->turnoActivo->mostrarDatos();
        this->iniciarTurno_feedback();
    }

}






void Controlador::aplazarTurno()
{
    this->banner(" TURNO APLAZADO ");
    this->pausar();
}




void Controlador::finalizarTurno()
{
    this->lista_turnos.erase(this->lista_turnos.begin());
    this->banner("ATENDIDO EXITOSAMENTE");
    this->pausar();
}






void Controlador::PanelInformacion()
{
    this->banner("TURNOS EN ESPERA");
    for (auto it : this->lista_turnos ) {
        it.mostrarDatos();
    }
    this->pausar();
}
