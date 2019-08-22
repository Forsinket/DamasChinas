#include "Menu.h"
#include "Partida.h"
#include <iostream>
#include "Partida.h"
using namespace std;


Menu::Menu()
{}

Menu::~Menu()
{}

void Menu::menuPrincipal()
{

    int opcion;
	
	cout << "------Damas-------" << endl;
    cout << "1. iniciar partida" << endl;
    cout << "2. cargar partida" << endl;
    cout << "3. Cerrar" << endl;
    cout << "Elija una opcion: ";
    cin >> opcion;

 	switch (opcion)
 	{
 		case 1:
 			Partida * partida = new Partida();
    		partida->iniciarPartida();
    		
        	break;
	}
}
