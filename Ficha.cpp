#include "Ficha.h"

Ficha::Ficha(int filaPosicion, int columnaPosicion, int forma):EspacioTablero(filaPosicion, columnaPosicion, forma)
{
    this->filaPosicion = filaPosicion;
    this->columnaPosicion = columnaPosicion;
    this->forma = forma;
}

Ficha::~Ficha()
{
    
}

void Ficha::moverFicha()
{
    
}