#include "Partida.h"
#include "Maquina.h"
#include "Humano.h"
#include <iostream>
#include <string>
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
		partidaHumanos();

		break;
	case 2:
		partidaIA();

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


void Partida::partidaHumanos()
{
	int turnoFila,turnoColumna;
	bool victoria = false;
	string nombre1,nombre2;

		

		jugadorDos = new Humano();
		elegirFichas(tablero);

		cout << "ingrese nombre jugador 1" << endl;
		cin >> nombre1;
		cout << "Ingrese nombre jugador 2" << endl;
		cin >> nombre2;

	do
	{
		cout << "Turno " << nombre1 << endl;
		cout << "ingrese # de fila" << endl;
		cin >> turnoFila;
		cout << "ingrese # de columna" << endl;
		cin >> turnoColumna;
		jugadorUno->moverFicha();




		cout << "Turno " << nombre2 << endl;
		cout << "ingrese # de fila" << endl;
		cin >> turnoFila;
		cout << "ingrese # de columna" << endl;
		cin >> turnoColumna;
		jugadorDos->moverFicha();
		
	} while (victoria == false);
	

}

void Partida::partidaIA()
{
	int turnoFila,turnoColumna;
	bool victoria = false;
	string nombre1;

		cout << "ingrese nombre jugador 1" << endl;
		cin >> nombre1;

		maquina = new Maquina();
		elegirFichas(tablero);

	do
	{
		cout << "Turno " << nombre1 << endl;
		cout << "ingrese # de fila" << endl;
		cin >> turnoFila;
		cout << "ingrese # de columna" << endl;
		cin >> turnoColumna;
		jugadorUno->moverFicha();


		maquina->moverFicha();

	} while (victoria == false);
}




