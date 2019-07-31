#ifndef FICHA_H
#define FICHA_H

class Ficha{
	private:
		int filaPosicion;
		int columnaPosicion;
		bool esDama;
	public:
		Ficha();
		~Ficha();
		
		void setPosicion(int fila, int columna);
		bool puedeComer();
};

#endif