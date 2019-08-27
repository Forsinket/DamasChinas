#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include "EspacioTablero.h"
#include "Ficha.h"
#include "Tablero.h"

class Jugador{
    protected:
        bool tieneTurno;
        bool ganador;
    
    public:
        Jugador();
        ~Jugador();

        //Metodos in game
        void elegirFichas();
        void eliminarFicha();
        void moverFicha(int fila, int columna, Tablero * tablero, EspacioTablero * &ficha);
        bool puedeComer();
        bool puedeMover(int fila, int columna, bool jugadorUno, bool jugadorDos, EspacioTablero * &ficha);
};

#endif 
