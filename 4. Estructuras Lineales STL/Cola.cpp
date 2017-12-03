/* Autor: William Aguirre Zapata */
#include <vector>
#include <iostream>
using namespace std;

template <class T>

class Cola : public vector <T>{
	public:
		Cola ();
		void adicionar (T elem);
		void mostrar ();
		T eliminar();
};


template <class T>
Cola <T>::Cola(): vector<T> () {}


template <class T>
void Cola <T>::adicionar (T elemento) {
	this -> push_back (elemento);
}


template <class T>
void Cola <T>::mostrar () {
	int n = this->size ();
	for (int i=0; i < n; i++){
		cout << this->at (i) << " ";
	}
	cout << endl;
}


template <class T>
T Cola <T>::eliminar(){
	int First = 0;
	T elemento = this-> at(First);
	this -> erase(this -> begin());
	return elemento;
}
