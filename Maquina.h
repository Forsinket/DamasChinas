#ifndef MAQUINA_H
#define MAQUINA_H
#include <vector>
#include "Ficha.h"
#include "Jugador.h"

class Maquina: public Jugador
{    
  
    public:
        Maquina();
        ~Maquina();
        void moverFicha();
       

};

Maquina::Maquina()
{
}

Maquina::~Maquina()
{
}


#endif