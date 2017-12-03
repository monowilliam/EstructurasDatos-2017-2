/* Autor: William Aguirre Zapata */
#ifndef __MIJUGADOR_H__		
#define __MIJUGADOR_H__		

#include "jugador.h"

#include <iostream>
using namespace std;

// Representa el tablero donde se pintan los barcos y los disparos
class MiJugador:public Jugador {
public:
	MiJugador (string nombre);
	Coordenada leerMovimiento();
	void mostrarTableros () ;
	bool estaDerrotado();
	bool esHit(Coordenada c);
	void marcarHitTableroPrincipal(Coordenada c);
	void marcarHitTableroSecundario(Coordenada c);
	
	//ListaCoordenadas encontrarEspacioLibre (Nave nv) ;
	//void crearNaves (int nBarcos, int nSubmarinos, int nPortaaviones);
	//void ubicarNaves();
};
			
#endif
