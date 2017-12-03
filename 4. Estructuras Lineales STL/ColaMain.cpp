/* Autor: William Aguirre Zapata */
#include "Cola.cpp"
#include <stdexcept>
#include <stdlib.h>

int main (){
	try{
		Cola <int> c;
		
		c.adicionar (3);
		c.adicionar (6);
		c.adicionar (9);
		
		c.mostrar ();
		c.eliminar ();
		c.mostrar ();
		c.eliminar ();
		c.mostrar ();
		c.eliminar ();
		c.mostrar ();
		c.eliminar ();
	}
	catch (const std::out_of_range &oor){
		cout << "No hay mas elementos en la Cola" << endl;
 	}
 	system("pause");
}
