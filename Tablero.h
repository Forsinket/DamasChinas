#ifndef TABLERO_H
#define TABLERO_H

class Tablero{

    private: 
        int filas;
        int columnas;
    
    public:
    	//Constructor y destructor
        Tablero();
        ~Tablero();
        
        //Metodos set
        void setColumnas(int numeroColumnas);
        void setFilas(int numeroFilas);
        
		//Otros metodos
        void generarTablero(int numeroFilas, int numeroColumnas);

};

#endif
