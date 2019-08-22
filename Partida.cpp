#include "Partida.h"

Partida::Partida(){
	tablero = new Tablero();
	jugadorUno = new Humano();
}

Partida::~Partida(){
}

void Partida::iniciarPartida()
{
	jugadorUno->elegirFichas(tablero);
}	
