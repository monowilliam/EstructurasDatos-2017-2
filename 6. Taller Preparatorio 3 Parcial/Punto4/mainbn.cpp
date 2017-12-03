/* Autor: William Aguirre Zapata */
#include <iostream>
using namespace std;

#include "barco.h"
#include "coordenada.h"
#include "jugador.h"
#include "lista.h"
#include "listacoordenadas.h"
#include "listanaves.h"
#include "nave.h"
#include "portaaviones.h"
#include "submarino.h"
#include "tablero.h"

//#include "mijugador.h"
#include "mitablero.h"

int main (){
	int nb = 3; //naveBarco
	int ns = 2; //naveSubmarino
	int np = 1; //navePortaaviones
	
	//Crear Juego del Jugador 1
	Jugador j1 ("Jugador 1");

	
	
	//Crear los objetos de de las naves para el punto 4 del TallerParcial3
	Barco b1;
	Submarino s1;
	Portaaviones p1;
	//Crear los objetos de de las naves para el punto 4 del TallerParcial3
	
	
	j1.crearNaves(nb,ns,np);
	j1.ubicarNaves();
	j1.mostrarTableros();
	
	//Crear Juego del Jugador 2
	Jugador j2 ("Jugador 2");
	j2.crearNaves(nb,ns,np);
	j2.ubicarNaves();
	j2.mostrarTableros();
	
	j1.guardarse(nb,ns,np,b1,s1,p1); //Punto 4 del TallerParcial3
		
	do{	
	Coordenada c(0,0);
		do{
			j1.mostrarTableros();
			c = j1.leerMovimiento();
			
			if(j1.esHit(c) == true){
				j1.marcarHitTableroSecundario(c);
				j2.marcarHitTableroPrincipal(c);	
				
			}
		}while(j1.esHit(c) == true);
		
	Coordenada d(0,0);
		do{
			j2.mostrarTableros();
			d = j2.leerMovimiento();
			
			if(j2.esHit(d) == true){
				j2.marcarHitTableroSecundario(d);
				j1.marcarHitTableroPrincipal(d);
			}
		}while(j2.esHit(d) == true);
		
	}while(!(j1.estaDerrotado() || j2.estaDerrotado()));
	

	system("pause");
	return 0;
}
