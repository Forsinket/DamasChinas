#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include "Ficha.h"

class Jugador{
    protected:
        std::vector<Ficha*> fichas;
        bool tieneTurno;
        bool ganador;
    
    protected:
        Jugador();
        ~Jugador();

        void setTurno();
        void eliminarFicha();
        void moverFicha();
        bool puedeComer();
        bool puedeMover();
};

#endif 
