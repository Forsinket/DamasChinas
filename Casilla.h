#ifndef CASILLA_H
#define CASILLA_H
#include "EspacioTablero.h"

class Casilla: public EspacioTablero{
    public:
        Casilla(int filaPosicion, int filaColumna, int forma);
        ~Casilla();

        bool puedeContenerFicha();
};

#endif