/* Autor: William Aguirre Zapata */
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

typedef struct Diccionario {
		char palabra [50];
		char significado [50];
};

//----------------------------------------------------------------------

//----------------------------------------------------------------------
void copiarIndice(const char *Dic, const char *arcDic){
	ifstream archivoDic;
	ofstream archivoCopia;
	archivoDic.open(Dic);
	archivoCopia.open(arcDic);
	
	int indice=0;
	string palabra;
	
	while (!archivoDic.eof()) {
        archivoDic >> palabra;
        archivoCopia << indice <<" "<< palabra << "\n";
		indice++;
    }
    archivoDic.close();
    archivoCopia.close();
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void copiarBinario(const char *Dic,Diccionario d1){
	ifstream archivoDic;
	ofstream salida;
	
	archivoDic.open(Dic);
	salida.open ("diccionario.bin", ios::binary);
	
	while(!archivoDic.eof()) {
		archivoDic >> d1.palabra >> d1.significado;
		salida.write((char *)&d1, sizeof (d1));
	}
	
	salida.close();
	archivoDic.close();
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
void leerDiccionario(const char *diccionario){
	Diccionario d2;
	ifstream in;
	in.open (diccionario, ios::in|ios::binary);
	
	in.seekg (ios::beg);
	for(int i=0; i< sizeof(in); i++){
		in.read ((char *)&d2, sizeof (d2));
		cout << d2.palabra <<" "<<d2.significado << endl;
	}
	cout << sizeof(in);
	cout << "finalizo correctamente"<< endl;

	in.close ();	
}
//----------------------------------------------------------------------

//crear estructura de nodos doblemente enlazadas-------------------------


//----------------------------------------------------------------------
int main(){
	Diccionario d1;
	copiarIndice("dict.txt","indiceDic.txt");
	copiarBinario("dict.txt",d1);
	//leerDiccionario("diccionario.bin");

	system("pause");
}

