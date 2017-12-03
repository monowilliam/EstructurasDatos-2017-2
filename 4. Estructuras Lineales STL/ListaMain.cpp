/* Autor: William Aguirre Zapata */
#include "Lista.cpp"
#include <stdexcept>
#include <stdlib.h>


int main(){
	try {
		Lista <int> l;
		
		l.adicionar(1);
		l.adicionar(2);
		l.adicionar(3);

		l.mostrar();
		l.eliminar(0);
		l.mostrar();
		
		l.insertar(2,99);
		l.mostrar();
		
		cout << "Longitud: " << l.longitud() << endl;
		
		cout << "Inserte un elemento a BUSCAR en la Lista: ";
		int a;
		cin>>a;
		l.buscar(a);
				
		cout << "getElemento(2): " << l.getElemento(2) << endl;		
		
		l.setElemento(50,1);
		cout << "setElemento(50,1): ";
		l.mostrar();
	}
	catch (const std::out_of_range &oor) {
		cout << "No hay mas elementos en la Lista" << endl;
	}
	
	system("pause");
}
