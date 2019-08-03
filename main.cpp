#include <iostream>
#include <string>
#include <vector>
#include "Tablero.h"

using namespace std;

int main()
{
	Tablero * tablero = new Tablero();

	tablero->generarTablero();
	 
	return 0;
}
