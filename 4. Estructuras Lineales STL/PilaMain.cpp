/* Autor: William Aguirre Zapata */
#include "Pila.cpp"
#include <stdexcept>
#include <stdlib.h>

int main () {
	try {
		Pila <int> p;
	
		p.adicionar (3);
		p.adicionar (6);
		p.adicionar (9);
		
		p.mostrar ();
		p.eliminar ();
		p.mostrar ();
		p.eliminar ();
		p.mostrar ();
		p.eliminar ();
		p.mostrar ();
		p.eliminar ();
	}
	catch (const std::out_of_range &oor) {
  		cout << "No hay mas elementos en la Pila" << endl;
  	}
	system("pause");
}
