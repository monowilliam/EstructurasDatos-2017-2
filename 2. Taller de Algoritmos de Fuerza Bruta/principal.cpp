/**		Taller de Algoritmos de Fuerza Bruta
			09/Agosto/2017  William Aguirre Zapata**/

#include <iostream>
#include<string.h>
#define MAXT 1001
#define MAXP 1000

#include "algoritmos.h"
#include "algoritmos.cpp"
using namespace std;

void punto1();
void punto2();
void punto3();
void punto4();
void punto5();


int main(){
    int decision;
    while (1){
    	//-----------ENCABEZADO DEL MENÚ DE LA APLICACIÓN-----------------------------------//
    	cout<<endl ;
	    cout<<"\t ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» "<<endl;
	    cout<<"\t º Taller de Algoritmos de Fuerza Bruta º"<< endl ;
	    cout<<"\t º ------ William Aguirre Zapata ------ º "<< endl ;
	    cout<<"\t ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ "<<endl<<endl;
	    //----------- MENÚ DE LA APLICACIÓN--------------------------------------------------//
        cout << "Selecciona un NUMERO de estas opciones: " <<endl;
		cout << "1.  Exponente por fuerza bruta (a elevado a la n)"<<endl;
		cout << "2.  Busqueda exhaustiva por fuerza bruta"<<endl;
		cout << "3.  Ordenamiento por Burbuja"<<endl;
		cout << "4.  Ordenamiento por Seleccion"<<endl;
		cout << "5.  Emparejamiento de Cadenas"<<endl;
		cout << "0.  Para salir de la aplicacion"<<endl;
        cin >> decision;
        switch(decision){
            case 0: return 0; break;
            case 1: punto1(); break;
            case 2: punto2(); break;
            case 3: punto3(); break;
            case 4: punto4(); break;
            case 5: punto5(); break;
            default: cout << "Opinión no existe, selecciona un numero valido: "<<endl << endl;
        }
    }
}


//-------------------FUNCIÓN QUE LLAMA AL ALGORITMO EXPONENTE---------------------------------------------------//
void punto1(){
    int numero;
    int pot;
	cout << "Ingrese la base: ";
    cin >> numero;
    cout << "Ingrese el exponente: ";
    cin >> pot;
    int segundo=exponente(pot,numero);
    cout << "El resultado de "<< numero << " elevado a la " << pot << " es: "<< segundo << endl << endl;
}


//--------FUNCIÓN QUE LLAMA AL ALGORITMO DE LA BUSQUEDAD SECUENCIAL---------------------------------------------//
void punto2(){
    int dato;
    int cardinalidad;
    int arreglo[]={1,3,2,4,5};
    cout << "Ingrese el dato que desea buscar en el arreglo: ";
    cin >> dato;
    cout << "Ingrese la cardinalidad del arreglo: ";
    cin >> cardinalidad;
    int resultado= busquedadSecuencial(dato,cardinalidad, arreglo);
    cout << "Esta en la posicion: " << resultado << endl << endl;
    }


//----------FUNCIÓN QUE LLAMA AL ALGORITMO ORDENAMIENTO DE BURBUJA----------------------------------------------//
void punto3(){
	int tam,i;
    cout<< "Ingrese el tamaño del arreglo: "; //INGRESA POR TECLADO EL TAMAÑO DEL ARREGLO
    cin>>tam;
    int arreglo[tam];
    for(int i=0; i<tam; i++){
        cout << "Ingrese valor " << i+1 << " : "; //INGRESA LOS VALORES DEL ARREGLO HASTA SU TAMAÑO DEFINIDO ANTERIORMENTE
        cin>>arreglo[i];
    }
    cout<<endl<<"----Arreglo sin ordenar---"; //MUESTRE EN PANTALLA EL ARREGLO INGRESADO EN SU RESPECTIVO ORDEN
    for(int i=0; i<tam; i++){
        cout<<"\n a["<<i<<"]="<<arreglo[i];
    }
	cout << endl<<endl;
	cout<<"----Arreglo ordenado por BURBUJA---"; //MUESTRA EN PANTALLA EL ARREGLO ORDENADO DE MENOR A MAYOR
	burbuja(arreglo, tam);
    for(i=0; i<tam; i++){
        cout<<"\n a["<<i<<"]="<<arreglo[i];
    }
	cout << endl<<endl;	
}


//----------FUNCIÓN QUE LLAMA AL ALGORITMO ORDENAMIENTO POR SELECCION----------------------------------------------//
void punto4(){
	int tam,i;
    cout<< "Ingrese el tamaño del arreglo: "; //INGRESA POR TECLADO EL TAMAÑO DEL ARREGLO
    cin>>tam;
    int arreglo[tam];
    for(int i=0; i<tam; i++){
        cout << "Ingrese valor " << i+1 << " : "; //INGRESA LOS VALORES DEL ARREGLO HASTA SU TAMAÑO DEFINIDO ANTERIORMENTE
        cin>>arreglo[i];
    }
    cout<<endl<<"----Arreglo sin Ordenar---"; //MUESTRE EN PANTALLA EL ARREGLO INGRESADO EN SU RESPECTIVO ORDEN
    for(int i=0; i<tam; i++){
        cout<<"\n a["<<i<<"]="<<arreglo[i];
    }
	cout << endl<<endl;
	cout<<"----Arreglo ordenado por SELECCION--"; //MUESTRA EN PANTALLA EL ARREGLO ORDENADO DE MENOR A MAYOR
	seleccion(arreglo, tam);
    for(i=0; i<tam; i++){
        cout<<"\n a["<<i<<"]="<<arreglo[i];
    }
	cout << endl<<endl;
}

//----------FUNCIÓN QUE LLAMA AL ALGORITMO EMPAREJAMIENTO DE CADENAS----------------------------------------------//
void punto5(){	
	char texto[MAXT];
	char patron[MAXP];
	cout<<endl<<" Ingrese Texto: \n\t\t"; //INGRESA POR TECLADO LOS CARACTERES DE UN TEXTO LARGO 
    gets( texto );
    cin>>texto;

    cout<<endl<<" Ingrese Patron: \n\t\t"; //INGRESA POR TECLADO LOS CARACTERES DE UN PATRÓN A BUSCAR EN EL TEXTO LARGO 
    gets( patron );
    cin>>patron;

    int n  = strlen( texto );
    int m  = strlen( patron );

	int resultado = emparejamiento(texto,n,patron,m);
	cout<<"Esta en la posicion: "<< resultado<< endl<< endl; //RETORNA LA POSICIÓN DEL PATRÓN EN EL TEXTO LARGO
}
