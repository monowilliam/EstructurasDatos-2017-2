#ifndef __JUGADOR_H__		
#define __JUGADOR_H__

#include <fstream>

#include <cstdlib>
#include "lista.h"
#include "mitablero.h"
#include "nave.h"
#include "barco.h"
#include "submarino.h"
#include "portaaviones.h"
#include "listanaves.h"
#include "listacoordenadas.h"


// Clase que representa el jugador y que maneja las lista de naves y
// los dos tableros: principal y secundario para jugar con el oponente.
class Jugador {
	protected:
		string nombre; // Nombre del jugador
		MiTablero *tblPrincipal; // Tablero donde se ubican las naves
		MiTablero *tblSecundario; // Tablero donde marca los hits del contrario
		ListaNaves lstNaves;  // Lista que contiene todas las neves

	public:
		// Construye el jugador, construye la lista de naves
		// y crea los dos tableros
		Jugador (string nombre);

		// Crea la cantidad de barcos, submarinos, y portaaviones y los 
		// adiciona uno a uno a la lista de naves
		void crearNaves (int nBarcos, int nSubmarinos, int nPortaaviones);

		// Toma cada una de las naves de la lista de naves y las ubica
		// en el tablero principal de tal manera que no se sobreponen ni
		// pasan de los bordes del tablero
		void ubicarNaves () ;

		// Lee por teclado las posiciones (fila,columna) donde va a 
		// disparar el jugador y retorna estas posiciones como 
		// un objeto Coordenada
		Coordenada leerMovimiento () ;

		// Muestra en pantalla los dos tablero: principal y secundario
		void mostrarTableros () ;

		// Retorna "true" si en el tablero del jugador estan todos marcados,
		// es decir ya le pegaron (hit) a todas sus naves.
		bool estaDerrotado () ;

		// Retorna "true" si la coordenada "c" acierta (hit) sobre una 
		// posición de una nave. Es decir si es "true" que la celda "c"
		// esta marcada en el tablero principal con un simbolo de una nave
		bool esHit (Coordenada c) ;

		// Marca un hit en el tablero principal en la coordenada "c"
		void marcarHitTableroPrincipal (Coordenada c);

		// Marca un hit en el tablero secundario en la Coordenada "c"
		bool marcarHitTableroSecundario (Coordenada c) ;

		// Dado la nave "nv" encuentra el espacio (celdas) donde cabe la 
		// nave en el tablero principal sin sobreponerse a las otras y 
		// retorna la lista de coordenadas de ese espacio.
		//
		ListaCoordenadas encontrarEspacioLibre (Nave nv) ;
		
		
		
		
		//Funcion Guardar punto 4 del taller para el parcial-------------------------------------------
		void guardarse(int nb, int ns, int np, Barco b, Submarino s, Portaaviones p){
			fstream archivo;
			archivo.open("datosGuardar.txt");
			
			for(int i=0; i<nb; i++){
				archivo << b.getTipo()<<" "<<b.getDireccion() <<" "<< b.getLongitud() <<" "<< b.getSimbolo() << "\n";
			}
			for(int j=0; j<ns; j++){
				archivo <<s.getTipo()<<" "<<s.getDireccion()<<" "<<s.getLongitud()<<" "<<s.getSimbolo()<<"\n";
			}
			for(int k=0; k<np; k++){
				archivo << p.getTipo()<<" "<<p.getDireccion()<<" "<<p.getLongitud()<<" "<<p.getSimbolo() << "\n";
			}
			archivo.close();
		}
		//Funcion Guardar punto 4 del taller para el parcial-------------------------------------------------------------------
};

#endif			
