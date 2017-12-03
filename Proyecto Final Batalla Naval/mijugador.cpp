/* Autor: William Aguirre Zapata */
#include "mijugador.h"
#include "lista.h"

MiJugador::MiJugador (string nombre):Jugador(nombre){
	this->nombre = nombre;
	tblPrincipal = new MiTablero();
	tblSecundario = new MiTablero();
}

Coordenada MiJugador::leerMovimiento(){
	int x, y;
	cout << nombre << " Juego WILLIAM Ingrese Movimiento (x para columnas, y para filas): \n";
	cout << " Columnas x: "; cin >> x;
	cout << " Filas y: "; cin >> y;
	return Coordenada(y,x); 
}

void MiJugador::mostrarTableros(){
	system("cls");
	cout << endl << "........JUEGO HECHO POR WILLIAM ...... Jugador: " << nombre << "......................."<<endl;
	tblPrincipal->mostrarse();
	cout << "....................................................................................."<<endl;
	tblSecundario->mostrarse();
}


bool MiJugador::estaDerrotado(){
	return tblPrincipal->estanTodosMarcados();
}

bool MiJugador::esHit(Coordenada c){
	return tblPrincipal->estaCeldaMarcada (c);
}

void MiJugador::marcarHitTableroPrincipal(Coordenada c){
	tblPrincipal->marcarHit(c);
}

void MiJugador::marcarHitTableroSecundario(Coordenada c){
	tblSecundario->marcarHit(c);
}

/*
ListaCoordenadas MiJugador::encontrarEspacioLibre(Nave nv){
	ListaCoordenadas lc;
	for(int i=0; i<tblPrincipal->getFilas(); i++)
		for (int j=0; j<tblPrincipal->getColumnas(); j++){
			lc = nv.generarCoordenadas(Coordenada (i,j));
			if(tblPrincipal->celdasEstanLibres(lc))
				return lc;
		}
		return lc;
}


void MiJugador::crearNaves(int nBarcos, int nSubmarinos, int nPortaaviones){
	int i;
	for(i=0; i<nBarcos;i++){
		lstNaves.adicionar(Barco ());
	}
	for (i=0; i<nSubmarinos; i++){
		lstNaves.adicionar(Submarino());
	}
	for (i=0; i<nPortaaviones; i++){
		lstNaves.adicionar(Portaaviones());
	}



void MiJugador::ubicarNaves(){
	for (int i=0; i<lstNaves.longitud(); i++){
		Nave nv =lstNaves.getElemento(i);
		ListaCoordenadas lsc = encontrarEspacioLibre(nv);
		nv.setCoordenadas(lsc);
		cout << nv << " ";		
	}
*/



