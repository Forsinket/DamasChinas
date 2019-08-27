#include "Jugador.h"
#include <iostream>

using namespace std;

Jugador::Jugador(){

}

Jugador::~Jugador(){

}

void Jugador::moverFicha(int fila, int columna, Tablero * tablero, EspacioTablero * &ficha){
    
    tablero->actualizarMatriz(ficha->getFilaPosicion(), ficha->getColumnaPosicion(), fila, columna);

}

bool Jugador::puedeMover(int fila, int columna, bool jugadorUno, bool jugadorDos, EspacioTablero * &ficha){
    if(jugadorUno && !jugadorDos && ficha->getFormaEspacio() == 1){
        if(ficha->getFilaPosicion - 1 == fila && ((ficha->getColumnaPosicion + 1 == columna) 
        || (ficha->getColumnaPosicion - 1 == columna))){
            return true;
        }
    } else if(jugadorDos && !jugadorUno && ficha->getFormaEspacio() == 2){
        if(ficha->getFilaPosicion + 1 == fila && ((ficha->getColumnaPosicion + 1 == columna) 
        || (ficha->getColumnaPosicion - 1 == columna))){
            return true;
        }
    } else {
        return false;
    }
}