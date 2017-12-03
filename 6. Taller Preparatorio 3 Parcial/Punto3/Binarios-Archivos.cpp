/* Autor: William Aguirre Zapata */
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;


typedef struct Diccionario {
		char palabra [10];
		char significa [50];
};


string buscarSignificado(string palabra, string archIndice, string archBinario){
	ifstream archIndices;
	archIndices.open(archIndice);
	int indice;
	string tmpPalabra;
	
	while(!archIndices.eof()){
		archIndices >> indice >> tmpPalabra;
		if(tmpPalabra==palabra)
			break;
	}
	archIndices.close();
	
	int posBin = indice*60;
	Diccionario dic;
	ifstream archBin;
	archBin.open(archBinario,ios::binary);
	archBin.seekg(posBin);
	archBin.read(&dic,sizeof(dic));
	
	archBin.close();
	
	return dic.significa;

}




int main () {
	string sig=buscarSignificado("red", "indice.txt", "datos.bin");
	cout << sig;

	system("pause");
}

