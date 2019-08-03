#include "Partida.h"

Partida::Partida(){
}

Partida::~Partida(){
}

void Partida::IniciarPartida(Tablero * tablero)
{
	tablero->generarTablero();
}
