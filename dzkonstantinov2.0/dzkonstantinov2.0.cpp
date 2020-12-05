#include <iostream>
#include "Calc.h"
#include <string>



int main(int argc, char* argv[])
{
	double a = 2.0;
	double b = 1.1;
	double xn = 0.08;
	double xk = 1.08;
	double dx = 0.2;

	taskA(a, b, xn, xk, dx);

	return 0;
}

