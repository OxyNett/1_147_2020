#include <stdafx.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	setlocale(LC_ALL, "Russian");
	double a;
	double b;
	double c;
	double D;
	double x;
	double x1;
	double x2;


	cout << "Введите число a : ";
	cin >> a;
	cout << "Введите число b : ";
	cin >> b;
	cout << "Введите число c : ";
	cin >> c;
	D = b * b - 4 * a*c;
	if (D > 0)
	{
		x1 = (-1 * b + sqrt(D)) / (2 * a);
		x2 = (-1 * b - sqrt(D)) / (2 * a);
		cout << "Первый корень" << x1;
		cout << "Второй корень" << x2;
	}
	if (D == 0)
	{
		x1 = (-1 * b + sqrt(D)) / (2 * a);
		cout << "Первый корень" << x1;
	}
	else {
		cout << "Корней нет";
	}
	return 0;
}