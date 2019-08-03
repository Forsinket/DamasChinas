#include "Menu.h"
#include "Partida.h"
#include <iostream>
using namespace std;


Menu::Menu()
{}

Menu::~Menu()
{}

void Menu::menuPrincipal()
{

    int opcion;

    cout << "eliga una opcion" << endl;
    cout << "1. iniciar partida" << endl;
    cout << "2. cargar partida" << endl;
    cout << "3. Cerrar" << endl;
    cin >> opcion;

 switch (opcion)
 {
 case 1:
    iniciarPartida(Tablero * tablero);
        
        break;

 case 2:
    cargarPartida();

        break;

case 3:

    exit(-1);
    break;

 default:
     break;
 }
 
    

};