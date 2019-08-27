#ifndef FICHA_H
#define FICHA_H
#include "EspacioTablero.h"

class Ficha: public EspacioTablero{

	public:
		Ficha(int filaPosicion, int columnaPoisicion, int forma);
		~Ficha();
		
		
};

#endif