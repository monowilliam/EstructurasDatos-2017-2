/* Autor: William Aguirre Zapata */
#ifndef __LISTA_H__		
#define __LISTA_H__

#include <iostream>
using namespace std;

template <class T>
class nodo{
	public:
		T info;
		nodo <T> *siguiente;
};

template <class T>
class Lista{
	protected:
		nodo <T> *cabeza, *cola;
		
		nodo <T> *crearNodo(T valor){
			nodo <T> *n = new nodo <T>;
			n->info = valor;
			n->siguiente = NULL;
			return n;
		}
		
	public:
		Lista (){
			cabeza=cola=NULL;
		}


		// Adiciona el elemento "elem" al final de la lista
		void adicionar (T valor) {
			nodo <T> *n = crearNodo(valor);
			if(vacia())
				cabeza=cola=n;
			else
				cola->siguiente=n;
				cola=n;
		}
		

		// Obtiene el nodo por posición
		T getElemento(int pos){
			if(pos==1) {
				return cabeza->info;
			}	
			else{
				int i=1;
				nodo <T> *t = cabeza;
				while(i<pos){
					i++;
					t=t->siguiente;
				}
				return t->info;	
			}			
		}


		// Imprime todos los nodos de la lista
		void mostrarse (){
			nodo <T> *tmp;
			tmp=cabeza;
			while(tmp != NULL){
				cout <<"[" << tmp->info << "] ";
				tmp = tmp->siguiente;
			}
			cout<<endl;
		}


		// Cambia el valor del nodo ubicado en la posicion "pos"
		void setElemento (T valor, int pos){
			if(pos==1) {
				cabeza->info = valor;
			}	
			else{
				int i=1;
				nodo <T> *t = cabeza;
				while(i<pos){
					i++;
					t=t->siguiente;
				}
				t->info = valor;
			}
		}



		// Inserta el nodo "valor" en la posicion "pos"
		void insertar (T valor, int pos){
			nodo <T> *n=crearNodo(valor);
			if(pos==0){
				n->siguiente = cabeza;
				cabeza=n;
			}
			else{
				if(pos==longitud()-1){
					adicionar(valor);
			}
				else{
					int k= 0;
					nodo <T>*tmp=cabeza;
					while(k<pos-1){
						k++;
						tmp = tmp->siguiente;
					}
					n->siguiente = tmp->siguiente;
					tmp->siguiente = n;
				}
			}
		}

		
		// Elimina de la lista el nodo en la posicion "pos" y lo retorna
		void eliminar(int pos){
			//eliminar primero
			nodo <T> *tmp;
			if(pos==1){
				tmp = cabeza;
				cabeza = cabeza->siguiente;
				delete (tmp);
			}
			//eliminar uno diferente al primero
			else{
				nodo <T> *tmp = cabeza;
				int i=1;
				while(i<pos-1){
					i++;
					tmp = tmp->siguiente;
				}
				//elimina uno diferente al primero y al ultimo
				if(pos!=longitud()){
					nodo <T> *x = tmp->siguiente;
					tmp->siguiente = x->siguiente;
					delete (x);	
				}
				//elimina el ultimo
				else{
					delete(tmp->siguiente);
					tmp->siguiente = NULL;
					cola=tmp;
				}
			}
		}


		// Retorna la longitud de la lista
		int longitud (){ 
			nodo <T> *tmp;
			tmp=cabeza;
			int k=0;
			while(tmp != NULL){
				tmp = tmp->siguiente;
				k+=1;
			}
			return k;
		}
		
		
		// Retorna si la lista esta vacia
		bool vacia(){
			return(cabeza==NULL && cola==NULL);
		}	
			
	
		// Retorna si la lista hay un nodo "valor" 
		bool existeElemento (T valor){
			if (buscarElemento(valor) != -1){
				return true;
			}
			else{
				return false;
			}
		}
		

		// Busca si existe el nodo "valor" y si lo encuentra devuelve la posicion
		// donde lo encontro, de lo contrario retorna -1
		int buscarElemento (T valor){
			if(vacia()){
				return -1;
			}
			else{
				nodo <T> *tmp;
				tmp=cabeza;
				int i=0;
				while(i<longitud()){
					i++;
					if(tmp->info == valor){
						return i;
					}
					else{
						tmp = tmp->siguiente;
					}
				}
				return -1;
			}
		}

};



#endif
