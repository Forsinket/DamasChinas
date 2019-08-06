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
        void setPosicion(int fila, int columna);
        int getFormaEspacio();
};

#endif