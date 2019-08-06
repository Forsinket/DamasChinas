#ifndef PEON_H
#define PEON_H
#include "Ficha.h"

class Peon: public Ficha
{
    public:
        Peon(int filaPosicion, int columnaPosicion, int forma);
        ~Peon();
        void moverFicha();
};

#endif