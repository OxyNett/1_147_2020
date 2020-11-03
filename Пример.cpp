#include <iostream>
#include <cmath>
using namespace std;

double func(double x = 0)
{
	double y = pow(abs(x * x - 2.5), 1.0 / 4.0) + pow(log(x * x), 1.0 / 3.0);
	return y;
}
int main()
{
	cout << "Example: " << endl;
	cout << endl;
	cout << "Task A: " << endl;
	double ResA[50] = { 0 };
	double xn = 1.25;
	double xk = 3.25;
	double dx = 0.4;
	int i = 0;
	while (xn <= xk)
	{
		cout << xn << " => ";
		*(ResA + i) = func(xn);
		i++;
		xn = xn + dx;
		cout << func(xn) << endl;
	}

	cout << endl;

	cout << "Task B: " << endl;
	const int n = 5;
	double task_B[n] = { 1.84, 2.71, 3.81, 4.56, 5.62 };
	double ResB[n] = { 0, 0, 0, 0, 0 };
	for (int i = 0; i != n; )
	{
		cout << (*(task_B + i)) << " => ";
		*(ResB + i) = func(*(task_B + i));
		i++;
		cout << func(*(task_B + i)) << endl;
	}
}