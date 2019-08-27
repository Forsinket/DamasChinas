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

void EspacioTablero::setFilaPosicion(int fila){
    filaPosicion = fila;
}

void EspacioTablero::setColumnaPosicion(int columna){
    columnaPosicion = columna;
}

int EspacioTablero::getFilaPosicion()
{
    return filaPosicion;
}

int EspacioTablero::getColumnaPosicion()
{
    return columnaPosicion;
}