#include <iostream>
using namespace std;
#include "Series.h"
//#include "Validaciones.h"

bool validaNum(double n)
{
	if (n>=0 && n<=69){
		return true;
	}
	else {
		cout<<"El numero que ingresaste es incorrecto"<<endl;
		return false;
	}
}

double ingresaNumValido()
{
	double n=0;
	do {
		cout<<"Por favor ingresa un numero entre el 0 y el 69: "<<endl;
		cin>>n;
	}while (validaNum(n)==false);
	return n;

}

int main()
{
	cout<<"Calculadora de fibonacci y del factorial hasta el número 69"<<endl;
	double n = ingresaNumValido();

	Series s(n);
	cout<<"El número de fibonacci por el metodo iterativo es: "<<s.fibonacciIt()<<endl;
	//cout<<"El número de fibonacci por el metodo recursivo es: "<<s.fibonacciRec(n)<<endl;
	cout<<"El factorial por el metodo iterativo es: "<<s.factorialIt()<<endl;
	//cout<<"El factorial por el metodo recursivo es: "<<s.factorialRec(n)<<endl;

	return 0;
}
