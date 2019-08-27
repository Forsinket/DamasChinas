#ifndef ESPACIOTABLERO_H
#define ESPACIOTABLERO_H

class EspacioTablero{
    protected:
        int filaPosicion;
		int columnaPosicion;
        int forma;
    
    public:
        EspacioTablero(int filaPosicion, int columnaPosicion, int forma);
        ~EspacioTablero();
        void setFilaPosicion(int fila);
		void setColumnaPosicion(int columna);
        int getFormaEspacio();
        int getFilaPosicion();
        int getColumnaPosicion();
};

#endif