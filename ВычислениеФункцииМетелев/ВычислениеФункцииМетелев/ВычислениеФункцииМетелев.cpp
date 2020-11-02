#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#pragma once
double calc(double a, double b, double x);
double calc(double x);
void taskA(double a, double b, double xn, double xk, double dx);
void taskB(double a, double b, double* x, int size);
double calc(double a, double b, double x)
{
	double y = sqrt((fabs(a - b * x)) / ((pow(log10(x), 3))));
	return y;
}
double calc(double x)
{
	const double a = 7.2;
	const double b = 4.2;

	return calc(a, b, x);
}
void taskA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx)
	{
		double y = calc(a, b, x);
		std::cout << "x=" << x << " y=" << y << std::endl;
	}
	return;
}
void taskB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x=%.2f y=%.2f \n", x[i], y);
		cout << result << endl;
	}
}
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "14 вариант" << argc << endl;
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

	const double a = 7.2;
	const double b = 4.2;
	cout << "Task A: " << endl;
	taskA(a, b, 1.81, 5.31, 0.7);
	double x[] = { 2.4, 2.8, 3.9, 4.7, 3.16 };
	cout << "_____________________" << endl;
	cout << "Task B: " << endl;
	taskB(a, b, x, sizeof(x) / sizeof(x[0]));
	return 0;
}