#include "Partida.h"

Partida::Partida(){
}

Partida::~Partida(){
}

void Partida::iniciarPartida(Tablero * tablero)
{
	tablero->generarTablero();
}
