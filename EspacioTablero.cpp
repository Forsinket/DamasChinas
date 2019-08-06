#include "EspacioTablero.h"

EspacioTablero::EspacioTablero(int filaPosicion, int columnaPosicion, int forma){
    this->filaPosicion = filaPosicion;
    this->columnaPosicion = columnaPosicion;
    this->forma = forma;
}

EspacioTablero::~EspacioTablero(){

}

int EspacioTablero::getFormaEspacio()
{
    return forma;
}