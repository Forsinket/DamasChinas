#ifndef PARTIDA_H
#define PARTIDA_H
#include "Tablero.h"
#include "Jugador.h"
#include "Humano.h"

class Partida{

    private:
    Tablero * tablero;
    Jugador * jugadorUno;
    Jugador * jugadorDos;

	public:
    //Constructor y destructor
        Partida();
        ~Partida();

    //Metodos
        void iniciarPartida();
    	void cerrarPartida();
};


#endif
