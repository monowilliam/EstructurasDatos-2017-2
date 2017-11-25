/* Autor: William Aguirre Zapata */
#include "miLista.h"
#include <iostream>
using namespace std;

int main (){

	miLista <string> l1;
	
	l1.adicionar("hola");
	l1.adicionar("william");
	l1.adicionar("yes2");
	l1.adicionar("jaja");
	l1.mostrarse();
	cout << "Longitud: " << l1.longitud() << endl<<endl;

	l1.insertar("5656",0);
	l1.insertar("465",4);
	l1.mostrarse();
	
	int num1 = 6;
	string x = l1.getElemento(num1);
	cout << "getElemento(" << num1 << "): " << x << endl<<endl;

	int num2 = 6;
	l1.eliminar(num2);
	l1.mostrarse();
	
	int num3 = 99;
	int y = l1.buscarElemento("1");
	cout << "buscarElemento(" << "1" << "): " << y << endl<<endl;
	
	int num4 = 12;
	bool x1 = l1.existeElemento("2");
	cout << "existeElemento(" << num4 << ") 1-True 0-False: " << x1 << endl<<endl;

	l1.setElemento("45",1);
	l1.mostrarse();
	
	system("pause");
	return 0;

}

