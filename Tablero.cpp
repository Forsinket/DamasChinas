#include <iostream>
#include "Tablero.h"
#include <string>
#include <stdlib.h>

Tablero::Tablero(){
}

Tablero::~Tablero(){
}

void Tablero::setNumeroCasillas()
{
	
	std::cout << "Digite el numero de filas y columnas del tablero: ";
	std::cin >> filas;
	
	columnas = filas;
}

void Tablero::generarTablero()
{
	setNumeroCasillas();
	
	tableroPuntero = new int*[filas]; //Reservar memoria para las filas
	
	for(int i = 0; i < filas; i++)
	{
		tableroPuntero[i] = new int[columnas]; //Reservar memoria para las columnas
	}
	
	int filasAOcupar = filas - 2;
	int filasOcupadasPorFicha = filasAOcupar / 2;
	
	//Generando tablero
	
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			if(i % 2 == 0 && j % 2 != 0 && i <= (filasOcupadasPorFicha - 1)){
				*(*(tableroPuntero+i)+j) = 2;
			}if(i % 2 == 0 && j % 2 == 0 && i <= (filasOcupadasPorFicha - 1)){
				*(*(tableroPuntero+i)+j) = 0;
			}if(i % 2 != 0 && j % 2 == 0 && i <= (filasOcupadasPorFicha - 1)){
				*(*(tableroPuntero+i)+j) = 2;
			}if(i % 2 != 0 && j % 2 != 0 && i <= (filasOcupadasPorFicha - 1)){
				*(*(tableroPuntero+i)+j) = 0;
			}if(i == filasOcupadasPorFicha || i == (filasOcupadasPorFicha + 1)){
				*(*(tableroPuntero+i)+j) = 0;
			}if(i % 2 == 0 && j % 2 != 0 && i >= (filasOcupadasPorFicha + 2)){
				*(*(tableroPuntero+i)+j) = 1;
			}if(i % 2 == 0 && j % 2 == 0 && i >= (filasOcupadasPorFicha + 2)){
				*(*(tableroPuntero+i)+j) = 0;
			}if(i % 2 != 0 && j % 2 == 0 && i >= (filasOcupadasPorFicha + 2)){
				*(*(tableroPuntero+i)+j) = 1;
			}if(i % 2 != 0 && j % 2 != 0 && i >= (filasOcupadasPorFicha + 2)){
				*(*(tableroPuntero+i)+j) = 0;
			}
		}
	}

	//Mostrar tablero
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			std::cout << tableroPuntero[i][j] << "  ";
		}

		std::cout << std::endl;
	}
}


