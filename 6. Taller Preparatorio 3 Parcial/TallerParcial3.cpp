/* Autor: William Aguirre Zapata */

// 1.1) GUARDAR DEL LISTA NODOS
void guardarse (const char *nombreArchivo){
	fstream archivo;
	//string a=(nombreArchivo->c_str());
	archivo.open(nombreArchivo);
	nodo *tmp;
	tmp=cabeza;
	while(tmp != NULL){
		archivo << tmp->info << "\n";
		tmp = tmp->siguiente;
	}
	archivo.close();
}
	
		
// 1.2) CARGAR DEL LISTA DE NODOS	
void cargarse (const char *nombreArchivo){
	ifstream archivo;
	archivo.open(nombreArchivo);
	int pos=1; 
	int valor;
	while (!archivo.eof()) {
		archivo >> valor;
		setElemento(valor,pos);
		pos++;
	}
	archivo.close();
}


// 2.1) GUARDA DEL TABLAHASH
void TablaHash::guardarse (const char *nombreArchivo){
	fstream archivo;
	archivo.open(nombreArchivo);
	
	typename list<int> ::iterator itr;
	for (int i=0; i < buffer.size (); i++) {
		list<int> & ls = buffer [i];
		if (ls.size() > 0) {
			for (itr=ls.begin (); itr!= ls.end (); itr++)
					archivo << *itr << "\n";
		}
	}
	archivo.close();
}


// 2.2) CARGAR DEL TABLAHASH
void TablaHash::cargarse (const char *nombreArchivo){
	ifstream archivo;
	archivo.open(nombreArchivo);
	int valor;
	limpiar();
	while(!archivo.eof()) {
		archivo >> valor;
		adicionar(valor);		
	}
	archivo.close();
}


// 3) BUSCAR SIGNIFICADO EN DICCIONARIOS
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


// 4) GUARDAR DEL BATALLA NAVAL
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
