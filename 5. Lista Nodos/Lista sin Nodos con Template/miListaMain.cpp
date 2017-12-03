#include <algorithm>
#include <iostream>
#include "miLista.h"
#include <list>
using namespace std;

int main (){

	miLista <int> ls;
	
	ls.setElemento (3, 11);

	ls.adicionar (5);
	ls.adicionar (4);
	ls.adicionar (3);
	ls.adicionar (2);

	ls.mostrarse ();


	system("pause");
	return 0;
}

