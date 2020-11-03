#include <iostream>
#include <cmath>
using namespace std;

double func(double x = 0)
{
	double y = pow((pow(asin(x), 2) + pow(acos(x), 4)), 3);
	return y;
}
int main()
{
	cout << "Example: " << endl;
	cout << endl;
	cout << "Task A: " << endl;
	double ResA[50] = { 0 };
	double xn = 0.26;
	double xk = 0.66;
	double dx = 0.08;
	int i = 0;
	while (xn <= xk)
	{
		cout << xn << " => ";
		*(ResA + i) = func(xn);
		i++;
		xn = xn + dx;
		cout << func(xn) << "." << endl;
	}

	cout << endl;

	cout << "Task B: " << endl;
	const int n = 5;
	double task_B[n] = { 0.1, 0.35, 0.4, 0.55, 0.6 };
	double ResB[n] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i != n; )
	{
		cout << (*(task_B + i)) << " => ";
		*(ResB + i) = func(*(task_B + i));
		i++;
		cout << func(*(task_B + i)) << "." << endl;
	}
}
