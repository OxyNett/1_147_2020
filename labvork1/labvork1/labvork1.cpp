#include <iostream>
#include <cmath>
#include <string>   //зачем это тут?

#pragma once
double calc(double a, double b, double x);
double calc(double x);
void tA(double a, double b, double xn, double xk, double dx);
void tB(double a, double b, double* x, int size);

using namespace std;

double calc(double a, double b, double x)                   //Разделил чиcлитель и знаменатель, чтобы вы не смотрели на обилие скобочек)()()()()())(((())))(
{
	double num = ((a * pow(x, 1.0 / 3.0)) - (b * log(x) / log(5.0)));
	double den = (pow(log(x - 1), 3.0));
	double y = num / den;
	return y;
}

double calc(double x)               //До сих пор не понимаю, почему a,b  должны быть локальными переменными?
{
	const double a = 4.1;
	const double b = 2.7;

	return calc(a, b, x);
}

void tA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x = (x + dx))
	{
		double y = calc(a, b, x);
		cout << "x=" << x << "\t" << "y=" << y << endl;
	}
	return;
}

void tB(double a, double b, double x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double x[] = { 1.9, 2.15, 2.34, 2.74, 3.16 };
		double y = calc(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x=%3.5f y=%.2f \n", x[i], y);
		cout << result << endl;
	}
}

int main(int k, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	cout << "23 вариант" << k << endl;
	const double a = 4.1;
	const double b = 2.7;
	cout << "Task A: " << endl;
	tA(a, b, 1.5, 3.5, 0.4);
	double x[] = { 1.9, 2.15, 2.34, 2.74, 3.16 };
	cout << "###################" << endl;
	cout << "Task B: " << endl;
	tB(a, b, x, sizeof(x) / sizeof(x[0]));
	return 0;
}