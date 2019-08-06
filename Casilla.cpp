#include "Casilla.h"

Casilla::Casilla(int filaPosicion, int columnaPosicion, int forma):EspacioTablero(filaPosicion, columnaPosicion, forma)
{
    this->filaPosicion = filaPosicion;
    this->columnaPosicion = columnaPosicion;
    this->forma = forma;
}