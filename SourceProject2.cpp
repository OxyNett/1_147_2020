#include <iostream>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
		cout << "Введите уравнение a b c через пробел :";
	int a, b, c;
	cin >> a >> b >> c;
	double d = b * b - 4 * a * c;
	cout << "d=" << d << endl;

	if (d > 0)
	{
		double x1 = (-b - d) / 2 / a;
		double x2 = (-b + d) / 2 / a;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if (d = 0)
	{
		double x = (-b) / 2 / a;
		cout << "x=" << x << endl;
	}
	if (d < 0)
	{
		cout << "Нет решений" << endl;
	}
	_getch();
	return 0;
}
