#ifndef HUMANO_H
#define HUMANO_H
#include "Jugador.h"

class Humano: public Jugador{
    public:
        Humano();
        ~Humano();
        void moverFicha();
};

#endif