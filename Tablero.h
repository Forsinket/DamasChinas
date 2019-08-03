#ifndef TABLERO_H
#define TABLERO_H

class Tablero{

    private: 
        int filas;
        int columnas;
        int **tableroPuntero;
    
    public:
    	//Constructor y destructor
        Tablero();
        ~Tablero();
        
        //Metodos set
        void setNumeroCasillas();
        
		//Otros metodos
        void generarTablero();

};

#endif
