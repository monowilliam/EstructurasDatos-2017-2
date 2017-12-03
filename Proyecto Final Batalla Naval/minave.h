/* Autor: William Aguirre Zapata */
#ifndef __MINAVE_H__		
#define __MINAVE_H__		

#include "nave.h"

#include <iostream>
using namespace std;

// Representa el tablero donde se pintan los barcos y los disparos
class MiNave:public Nave {
public:
	char getSimbolo();

};
			
#endif
