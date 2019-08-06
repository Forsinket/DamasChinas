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
		
		virtual void moverFicha();
		void setPosicion(int fila, int columna);
		bool puedeComer();
};

#endif