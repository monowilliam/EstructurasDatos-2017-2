/**		Tarea 1 Mi calculadora
			07/Agosto/2017  William Aguirre Zapata**/
			
#include <iostream>
#include <conio.h>
#include "micalculadora.h"
#include <math.h>
using namespace std;


int potencia (int base, int exponente) {
	int resultado;
	resultado = pow (base, exponente);
	return resultado;
}


float calcCoseno ( float Angulo ){
	float resultado ;
	resultado =( float )cos( Angulo *PI /180.0 );
	return resultado ;
}


float calcSeno ( float Angulo ){
	float resultado;
	resultado =( float )sin( Angulo*PI/180.0);
	return resultado;
}


float calcLogaritmo ( float numero ){
	float resultado;
	resultado =log10( numero );
	return resultado;	
}

float calcRaiz ( float numero ){
	float resultado;
	resultado =sqrt( numero );
	return resultado;	
}

float calcTangente ( float numero ){
	float resultado;
	resultado =tanh( numero );
	return resultado;	
}

float calcArcoTangente ( float numero ){
	float resultado;
	resultado =atan( numero );
	return resultado;	
}

float calcArcoCoseno ( float Angulo ){
	float resultado, resul2;
	resultado =acos( Angulo  );
	resul2=((resultado*180)/PI);
	return resultado ;
}

float calcArcoSeno ( float Angulo ){
	float resultado, resul2;
	resultado =asin( Angulo );
	resul2= ((resultado*180)/PI);
	return resul2 ;
}

float calcSuma ( float a, float b ){
	float resultado;
	resultado= a+b;
	return resultado;
}





