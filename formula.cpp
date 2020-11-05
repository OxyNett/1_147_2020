#include <iostream>
#include <cmath>
#include <string>

double calc(double x)
{
	if (abs(x)>=1)
	{
		double y = pow(1.2,x) - pow(x,1.2);
		return y;
	}
	else
	{
		double y = acos(x);
		return y;
	} 
	
}

void taskA(double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(x);
		std::cout <<"x = "<<  x << "\t" <<"y = "<< y << std::endl;
	}
	return;
}

void taskB(double *x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(x[i]);
		
		char result[50];
		sprintf(result, "x = %3.5f y = %.2f \n", x[i], y);
		std::cout << result << std::endl;
		
	}
}

int main(int argc, char* argv[])
{
	std::cout << "TaskA:" << std::endl;
	taskA(0.2, 2.2, 0.4);
	double x[] = {0.1, 0.9, 1.2, 1.5, 2.3};
	std::cout << "TaskB:" << std::endl;
	taskB(x, sizeof(x) / sizeof(x[0]));
	return 0;
}