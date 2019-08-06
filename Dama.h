#ifndef DAMA_H
#define DAMA_H
#include "Ficha.h"

class Dama: public Ficha
{
    public:
        Dama(int filaPosicion, int columnaPosicion, int forma);
        ~Dama();
        void moverFicha();
};

#endif