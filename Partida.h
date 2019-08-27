#ifndef PARTIDA_H
#define PARTIDA_H
#include "Tablero.h"
#include "Jugador.h"
#include "Maquina.h"
#include "Humano.h"

class Partida{

    private:
    Tablero * tablero;
    Jugador * jugadorUno;
    Jugador * jugadorDos;
    Maquina * maquina;
    

	public:
    //Constructor y destructor
        Partida();
        ~Partida();

    //Metodos
        
        void iniciarPartida();
    	void cerrarPartida();
        void elegirFichas(Tablero * tablero);
        void modoDeJuego();
        void partidaHumanos();
        void partidaIA();
        
      
};


#endif
