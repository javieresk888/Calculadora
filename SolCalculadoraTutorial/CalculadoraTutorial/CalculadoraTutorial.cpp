#include"pch.h"
#include <iostream>
#include"Calculator.h"
#include<conio.h>

using namespace std;

int main()
{
	double x = 0, y = 0 , resultado = 0;
	
	char oper = '\0';

	cout<< "Calculator Console Application" << endl << endl;
	cout<< "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	while(true)	
	{
	cin >> x >> oper >> y;

	Calculator  Calculate;
	resultado = Calculate.Calculate(x, oper, y);
	cout << resultado;
	
	}
	return 0;
}
