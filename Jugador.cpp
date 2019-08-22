#include "Jugador.h"
#include <iostream>

using namespace std;

Jugador::Jugador(){

}

Jugador::~Jugador(){

}

void Jugador::elegirFichas(Tablero * tablero)
{   
    int formaColor;
    do{
        cout << "Elija la ficha que desee usar" << endl;
        cout << "Blancas (1) / Negras (2): ";

        cin >> formaColor;

        switch (formaColor)
        {
        case 1:
            tablero->generarTablero(1, 2);
            break;
        case 2:
            tablero->generarTablero(2, 1);
            break;
        default:
            cout << "Elija un color válido" << endl;
            break;
        }
    } while(formaColor != 1 && formaColor != 2);
}