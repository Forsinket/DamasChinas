#include "Dama.h"

Dama::Dama(int filaPosicion, int columnaPosicion, int forma):Ficha(filaPosicion, columnaPosicion, forma)
{
    this->filaPosicion = filaPosicion;
    this->columnaPosicion = columnaPosicion;
    this->forma = forma;
}

Dama::~Dama()
{

}