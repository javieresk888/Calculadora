#pragma once
class Calculator
{
public:
	/*Calculator();  //constructor
	~Calculator();*/ //destructor

	double Calculate(double x, char oper, double y);
	double Suma(double x, char oper, double y);
	double Resta(double x, char oper, double y);
	double Multiplicacion(double x, char oper, double y);
	double Division(double x, char oper, double y);
};

