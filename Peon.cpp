#include "Peon.h"

Peon::Peon(int filaPosicion, int columnaPosicion, int forma):Ficha(filaPosicion, columnaPosicion, forma)
{
    this->filaPosicion = filaPosicion;
    this->columnaPosicion = columnaPosicion;
    this->forma = forma;
}

Peon::~Peon()
{

}

void Peon::moverFicha()
{
    
}