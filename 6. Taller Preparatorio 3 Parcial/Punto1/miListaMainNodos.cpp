/* Autor: William Aguirre Zapata */
#include "miListaNodos.h"
#include <iostream>
using namespace std;

int main (){

	miLista l1;
	
	l1.adicionar(10);
	l1.adicionar(11);
	l1.adicionar(12);
	l1.adicionar(99);
	l1.mostrarse();
	cout << "Longitud: " << l1.longitud() << endl<<endl;

	l1.insertar(01,0);
	l1.insertar(55,4);
	l1.mostrarse();
	
	int num1 = 6;
	int x = l1.getElemento(num1);
	cout << "getElemento(" << num1 << "): " << x << endl<<endl;

	int num2 = 6;
	l1.eliminar(num2);
	l1.mostrarse();
	
	int num3 = 99;
	int y = l1.buscarElemento(num3);
	cout << "buscarElemento(" << num3 << "): " << y << endl<<endl;
	
	int num4 = 12;
	bool x1 = l1.existeElemento(num4);
	cout << "existeElemento(" << num4 << ") 1-True 0-False: " << x1 << endl<<endl;

	l1.setElemento(50,1);
	l1.mostrarse();
	
	l1.guardarse("datosGuardar.txt");
	l1.cargarse("datosCargar.txt");
	l1.mostrarse();
	
	system("pause");
	return 0;

}

