#ifndef JUGADOR_H
#define JUGADOR_H
#include <vector>
#include "Ficha.h"
#include "Tablero.h"

class Jugador{
    protected:
        std::vector<Ficha*> fichas;
        bool tieneTurno;
        bool ganador;
    
    public:
        Jugador();
        ~Jugador();

        //Metodos in game
        
        void elegirFichas();
        void eliminarFicha();
        void moverFicha();
        bool puedeComer();
        bool puedeMover();
};

#endif 
