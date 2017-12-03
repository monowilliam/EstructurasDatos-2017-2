/* Autor: William Aguirre Zapata */
#ifndef __MITABLERO_H__		
#define __MITABLERO_H__		

#include "tablero.h"

#include <iostream>
using namespace std;

// Representa el tablero donde se pintan los barcos y los disparos
class MiTablero:public Tablero {
public:
	MiTablero();
	
	// Retorn el numero de filas
	int getFilas ();

	// Retorn el numero de columnas
	int getColumnas (); 
	
	void mostrarse ();

	void marcarHit (Coordenada c);

	bool estaCeldaMarcada (Coordenada c);

	void pintarNaveEnTablero (Nave &nv);

	bool celdasEstanLibres (ListaCoordenadas lc);

	bool estanTodosMarcados ();
};
			
#endif
