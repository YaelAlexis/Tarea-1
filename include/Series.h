#include <iostream>
class Series
{
public:
	//Atributos
	double n;
	//Constructor
	Series(double n);
	//Metodos
	double leerNum();
	double fibonacciIt();
	double fibonacciRec(double n);
	double factorialIt();
	double factorialRec(double n);
};