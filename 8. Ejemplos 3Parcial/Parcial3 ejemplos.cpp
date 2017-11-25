/* Autor: William Aguirre Zapata */

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

//crear estructura de nodos doblemente enlazadas--------
struct nodo{
	int info;
	nodo *siguiente;
	nodo *anterior;
};


//Crear nodo doblemente enlazado-------------------------
nodo *crearNodo(int valor){
	nodo *n = new nodo;
	n->info = valor;
	n->siguiente = NULL;
	n->anterior = NULL;
	return n;
}


// estructura del CRUCE del parcial pasado: norte, sur, oriente, occidente.
struct nodoCruce{
	int carro;
	nodo *norte;
	nodo *sur;
	nodo *occidente;
	nodo *oriente;
};


//estructura del ARBOL----------------------------------
struct nodoArbol { 
	int info;
	nodoArbol *ptrIzq; 
	nodoArbol *prtDer; 
};
		

//Saber la longitud de la mitad del nodo doblemente enlazada
int longitudMitad (){
	nodo *tmpIni;
	nodo *tmpFin;
	tmpIni=cabeza;
	tmpFin=cola;
	int contador=0;
	if(tmpIni != tmpFin){
		while(tmpIni != NULL && tmpFin!=NULL){
			tmpIni = tmpIni->siguiente;
			tmpFin = tmpFin->anterior;
			contador++;
		}
	} else{
		return contador;
	}	
}


//Metodos de colision de tablaHasth colision-------------------
/*
La funcion hash
El tama~no de la tabla
	Generalmente asignado al principio
El esquema de manejo de las colisiones

-La funcion hash mapea llaves a enteros
-La funcion hash puede resultar en un traslado muchos-a-uno, causando
 colisiones:
	-  Colisiones ocurren cuando una funcion hash traslada una o mas llaves a
	   un mismo ndice del arreglo.
-Colisiones no pueden evitarse pero se pueden reducir usando una buena
 funcion hash.

IMPORTANTE:

- Tabla hash T es un vector de listas enlazadas
- Insertar elementos en el inicio (head) o al nal (tail)
- Clave k se guarda en la lista en T (fh(k))

-Que reduzca el chance de colisiones:
		1. Llaves diferente deberan transladarse a ndices diferentes
		2. Llaves se deberan distribuir uniformemente sobre toda la tabla.
		
		REDUCIR COLISIONES:
		I Encadenamiento
		I Direccionamiento abierto
		I Doble hashing
		I Etc.
		
*/
