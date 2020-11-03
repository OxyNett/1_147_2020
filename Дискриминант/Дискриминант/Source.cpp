#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, D, x, x1, x2;
	cout << "Решение уравнения с помощью дискриминанта.\n";
	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	cout << "Введите c: "; cin >> c;
	D = b * b - 4 * a * c;
	if (D < 0)
	{
		cout << "Дискриминант = " << D << ", что меньше 0, следовательно корней нет." << endl;
	}
	if (D == 0)
	{
		x = (-b) / (2 * a);
		cout << "Дискриминант = " << D << "." << endl;
		cout << "Корень уравнения = " << x << "." << endl;
	}
	else
	{
		cout << "Дискриминант = " << D << "." << endl;
		x1 = ((-b) + sqrt(D)) / (2 * a);
		cout << "Первый корень уравнения = " << x1 << "." << endl;
		x2 = ((-b) - sqrt(D)) / (2 * a);
		cout << "Второй корень уравнения = " << x2 << "." << endl;
	}
	return 0;
}