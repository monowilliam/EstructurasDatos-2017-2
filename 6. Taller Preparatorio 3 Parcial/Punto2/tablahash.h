/* Autor: William Aguirre Zapata */
#include <algorithm>
#include <iostream>
using namespace std;

#include <list>
#include <vector>


class TablaHash {
	private:
		vector <list <int> > buffer;
		int longitudActual;
		int funcionHash (int & x);
		void rehash ();

	public:
		TablaHash (int size);

		bool adicionar (int x) ;	

		bool eliminar (int & x) ; 

		bool existe (int x);

		void limpiar ();

		void mostrarse ();
		
		void guardarse (string nombreArchivo);
		
		void cargarse (string nombreArchivo);
};
