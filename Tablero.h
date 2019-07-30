#ifndef TABLERO_H
#define TABLERO_H

class Tablero{

    private: 
        int filas;
        int columnas;
        char **tableroPuntero;
    
    public:
    	//Constructor y destructor
        Tablero();
        ~Tablero();
        
        //Metodos set
        void setNumeroCasillas();
        
		//Otros metodos
        void generarTablero(int numeroFilas, int numeroColumnas);

};

#endif
