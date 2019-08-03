#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include "Ficha.h"

class Jugador{
    protected:
        std::vector<Ficha*> fichas;
        bool tieneTurno;
    
    protected:
        Jugador();
        ~Jugador();

        void setTurno();
        void eliminarFicha();
        virtual void moverFicha();
        bool puedeComer();
        bool puedeMover();
};

#endif 