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
	do
	{
		std::cout << "Digite el numero de filas y columnas del tablero: ";
		std::cin >> filas;
	
		columnas = filas;
	} while (filas < 7);
	
}

void Tablero::generarTablero()
{
	setNumeroCasillas();
	
	tableroPuntero = new EspacioTablero**[filas]; //Reservar memoria para las filas
	
	for(int i = 0; i < filas; i++)
	{
		tableroPuntero[i] = new EspacioTablero*[columnas]; //Reservar memoria para las columnas
	}
	
	int espaciosIntermedios = filas - 6;
	
	//Generando tablero
	
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			if(i % 2 == 0 && j % 2 == 0 && i <= 2){
				tableroPuntero[i][j] = new Casilla(i ,j ,0);
			}if(i % 2 == 0 && j % 2 != 0 && i <= 2){
				tableroPuntero[i][j] = new Peon(i, j, 2);
			}if(i % 2 != 0 && j % 2 == 0 && i <= 2){
				tableroPuntero[i][j] = new Peon(i, j, 2);
			}if(i % 2 != 0 && j % 2 != 0 && i <= 2){
				tableroPuntero[i][j] = new Casilla(i ,j ,0);
			}if(i > 2 && i < (3 + espaciosIntermedios)){
				tableroPuntero[i][j] = new Casilla(i ,j ,0);
			}if(i % 2 == 0 && j % 2 == 0 && i >= (3 + espaciosIntermedios)){
				tableroPuntero[i][j] = new Casilla(i ,j ,0);
			}if(i % 2 == 0 && j % 2 != 0 && i >= (3 + espaciosIntermedios)){
				tableroPuntero[i][j] = new Peon(i, j, 1);
			}if(i % 2 != 0 && j % 2 == 0 && i >= (3 + espaciosIntermedios)){
				tableroPuntero[i][j] = new Peon(i, j, 1);
			}if(i % 2 != 0 && j % 2 != 0 && i >= (3 + espaciosIntermedios)){
				tableroPuntero[i][j] = new Casilla(i ,j ,0);
			}
		}
	}
}

void Tablero::mostrarTablero()
{
	//Mostrar tablero
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			std::cout << tableroPuntero[i][j]->getFormaEspacio() << "  ";
		}
		
		std::cout << std::endl;
	}
}

