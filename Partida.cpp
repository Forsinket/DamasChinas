#include "Partida.h"
#include <iostream>
using namespace std;

Partida::Partida(){
	tablero = new Tablero();
	jugadorUno = new Humano();
}

Partida::~Partida(){
}

void Partida::iniciarPartida()
{
	modoDeJuego();
}	



void Partida::modoDeJuego()
{
	int modoJuego;
	cout << "Eliga modo de juego: " << endl;
	cout << "1. Jugador vs Jugador" << endl;
	cout << "2. Jugador vs IA" << endl;
	cin >> modoJuego;

	switch (modoJuego)
	{
	case 1:
		
		elegirFichas(tablero);

		break;
	case 2:
		
		elegirFichas(tablero);

		break;
	
	default:
		cout << "Eliga un modo de juego valido. " << endl;
		break;
	}
	
}

void Partida::elegirFichas(Tablero * tablero)
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


void partidaHumanos()
{

}

void partidaIA()
{
	
}