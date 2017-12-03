/* Autor: William Aguirre Zapata */
#include "mitablero.h"

// Representa el tablero donde se pintan los barcos y los disparos

// Retorn el numero de filas
int MiTablero::getFilas () { 
		return nFilas;
}

// Retorn el numero de columnas
int MiTablero::getColumnas () { 
		return nColumnas;
}

// inicializa los atributos. Las celdas de la matrix se inician con el caracter '-'
MiTablero::MiTablero(){
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++)
			matrix[i][j]='.';	
	}
	
}

void MiTablero::mostrarse(){
	cout << "\t";
	for(int k=0; k<nColumnas; k++){
		cout << k << "\t";
		
	}
	cout <<endl;
	for(int i=0;i<nFilas;i++){
		cout<<i<<"\t";
	
		for(int j=0;j<nColumnas;j++){
			cout<<matrix[i][j]<<"\t";
		}
			
		cout<<endl;	
	}cout<<endl<<endl;
	
	
	
	
}



