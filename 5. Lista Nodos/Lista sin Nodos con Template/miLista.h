#ifndef __MILISTA_H__		
#define __MILISTA_H__

#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

template <class T>
class miLista{
	protected:
		list <T> buffer;
		
	public:
		// Construye la lista vacia
		miLista (){
		}

		// Adiciona el elemento "elem" al final de la lista
		void adicionar (T elem) {
			buffer.push_back (elem);
		}

		// Retorna el elemento que está en la posición "x"
		T getElemento (int x){
			int n=0;
			for (typename list<T>::iterator it=buffer.begin (); it!=buffer.end(); it++) 
				if (x==n++) return *it;
		}

		// Imprime todos los elementos de la lista
		// Los elementos deben tener sobrecargados el operador <<
		void mostrarse (){
			for (typename list<T>::iterator it=buffer.begin (); it!=buffer.end();it++) 
				cout << "["<< *it <<"] "; 
			cout << endl;
		}

		// Cambia el valor del elemento ubicado en la posicion "x"
		void setElemento (T elem, int x){
			int n=0;
			for (typename list<T>::iterator it=buffer.begin (); it!=buffer.end();it++) 
				if (x==n++) *it=elem;
		}

		// Inserta el elemento "elem" en la posicion "x"
		void insertar (T elem, int x){
			int n=0;
			for (typename list<T>::iterator it=buffer.begin (); it!=buffer.end();it++) 
				if (x==n++) buffer.insert (it, elem);
		}

		// Elimina de la lista el elemento en la posicion "x" y lo retorna
		T eliminar (int x){
			int n=0;
			for (typename list<T>::iterator it=buffer.begin (); it!=buffer.end();it++) 
				if (x==n++) {
					T element = *it;
					buffer.erase (it);
					return element;
				}
			}

		// Retorna la longitud de la lista
		int longitud (){ 
			return buffer.size(); 
		} 

		// Retorna true si la lista esta vacia
		bool vacia (){ 
			return buffer.empty(); 
		}

		// Busca si existe el elemento "elem" y si lo encuntra devuelve la posicion
		// donde lo encontro, de lo contrario retorna -1
		int buscarElemento (T elem){
			int n=0;
			for (typename list<T>::iterator it=buffer.begin (); it!=buffer.end();it++) 
				if (*it==elem) 
						return n;
			return -1;
		}

		// Retorna true o false si el elemento "elem" existe o no en la lista
		bool existeElemento (T elem){
			bool found = (find(buffer.begin(), buffer.end(), elem) != buffer.end());
		}
};



#endif
