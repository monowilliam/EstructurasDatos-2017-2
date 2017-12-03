/**		Tarea 1 Mi calculadora
			07/Agosto/2017  William Aguirre Zapata**/

#include <iostream>
#include<string.h>

#include "micalculadora.h"
#include "micalculadora.cpp"
using namespace std;

void probarPotencia();
void probarCoseno();
void probarSeno();
void probarLogaritmo();
void probarRaiz();
void probarTangente();
void probarArcoTangente();
void probarArcoCoseno();
void probarArcoSeno();
void probarSuma();


int main(){
    int decision;
    while (1){
    	//-----------ENCABEZADO DEL MENÚ DE LA APLICACIÓN-----------------------------------//
    	cout<<endl ;
	    cout<<"\t ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» "<<endl;
	    cout<<"\t º        Tarea 1 Mi CALCULADORA        º"<< endl ;
	    cout<<"\t º ------ William Aguirre Zapata ------ º "<< endl ;
	    cout<<"\t ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ "<<endl<<endl;
	    //----------- MENÚ DE LA APLICACIÓN--------------------------------------------------//
        cout << "Selecciona un NUMERO de estas opciones: " <<endl;
		cout << "1.  Potencia"<<endl;
		cout << "2.  Coseno"<<endl;
		cout << "3.  Seno"<<endl;
		cout << "4.  Logaritmo"<<endl;
		cout << "5.  Raiz Cuadrada"<<endl;
		cout << "6.  Tangente"<<endl;
		cout << "7.  ArcoTangente"<<endl;
		cout << "8.  ArcoCoseno"<<endl;
		cout << "9.  ArcoSeno"<<endl;
		cout << "10. Suma de dos numeros"<<endl;
		cout << "0.  Para salir y cerrar la aplicacion"<<endl;
        cin >> decision;
        switch(decision){
            case 0: return 0; break;
            case 1: probarPotencia(); break;
            case 2: probarCoseno(); break;
            case 3: probarSeno(); break;
            case 4: probarLogaritmo(); break;
            case 5: probarRaiz(); break;
            case 6: probarTangente(); break;
            case 7: probarArcoTangente(); break;
            case 8: probarArcoCoseno(); break;
            case 9: probarArcoSeno(); break;
            case 10: probarSuma(); break;
            default: cout << "Opinión no existe, selecciona un numero valido: "<<endl << endl;
        }
    }
}


//-------------------FUNCIÓN QUE LLAMA AL ALGORITMO EXPONENTE---------------------------------------------------//
void probarPotencia () {
	int base, exponente, resultado;
	cout << "Ingrese base: ";
	cin >> base;
	cout << "Ingrese exponente: ";
	cin >> exponente;
	resultado = potencia (base, exponente);
	cout << "El resultado de " << base << " elevado a la " << exponente << " es: "<< resultado << endl;
}

void probarCoseno () {
	float angulo, resultado;
	cout << "Ingrese el ángulo: ";
	cin >> angulo;
	resultado = calcCoseno(angulo);
	cout << "El COSENO de " << angulo << " es: " << resultado << endl;
}

void probarSeno () {
	float angulo, resultado;
	cout << "Ingrese el ángulo: ";
	cin >> angulo;
	resultado = calcSeno(angulo);
	cout << "El SENO de " << angulo << " es: " << resultado << endl;
}

void probarLogaritmo () {
	float numero, resultado;
	cout << "Ingrese el numero: ";
	cin >> numero;
	resultado = calcLogaritmo(numero);
	cout << "El Logaritmo de " << numero << " es: " << resultado << endl;
}

void probarRaiz () {
	float numero, resultado;
	cout << "Ingrese el numero: ";
	cin >> numero;
	resultado = calcRaiz(numero);
	cout << "La raiz cuadrada de " << numero << " es: " << resultado << endl;
}

void probarTangente () {
	float angulo, resultado;
	cout << "Ingrese el ángulo: ";
	cin >> angulo;
	resultado = calcTangente(angulo);
	cout << "La Tangente de " << angulo << " es: " << resultado << endl;
}

void probarArcoTangente () {
	float angulo, resultado;
	cout << "Ingrese el ángulo: ";
	cin >> angulo;
	resultado = calcArcoTangente(angulo);
	cout << "La Tangente inversa de " << angulo << " es: " << resultado << endl;
}

void probarArcoCoseno () {
	float angulo, resultado;
	cout << "Ingrese el ángulo: ";
	cin >> angulo;
	resultado = calcArcoCoseno(angulo);
	cout << "El COSENO inverso de " << angulo << " es: " << resultado << endl;
}

void probarArcoSeno () {
	float angulo, resultado;
	cout << "Ingrese el ángulo: ";
	cin >> angulo;
	resultado = calcArcoSeno(angulo);
	cout << "El SENO inverso de " << angulo << " es: " << resultado << endl;
}

void probarSuma () {
	float a,b,resultado;
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	resultado = calcSuma(a,b);
	cout<<"El resultado de la suma de "<< a<<" + "<<b<<" es igual a: "<<resultado<<endl;
	
	
}
