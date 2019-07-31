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
	std::cout << "Digite el numero de filas y columnas del tablero";
	std::cin >> filas;
	
	columnas = filas;
}

void Tablero::generarTablero(int numeroFilas, int numeroColumnas)
{
	tableroPuntero = new char*[filas]; //Reservar memoria para las filas
	
	for(int i = 0; i < filas; i++)
	{
		tableroPuntero[i] = new char[columnas]; //Reservar memoria para las columnas
	}
	
	//int filasAOcupar = filas - 2;
	//int filasOcupadasPorFicha = filasAOcupar / 2;
	
	//Generando tablero
	
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			if(i % 2 == 0 && j % 2 == 0)
			{
				*(*(tableroPuntero+i)+j) = 'B';
			}else if(i % 2 == 0 && j % 2 != 0)
			{
				*(*(tableroPuntero+i)+j) = 'N';
			}
		}
	}
}


