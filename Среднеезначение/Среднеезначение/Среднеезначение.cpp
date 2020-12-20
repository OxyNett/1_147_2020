#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, d, srz;
	cout << "Введите 4 числа" << endl;
	cin >> a >> b >> c >> d;
	srz = (a + b + c + d) / 4;
	cout << "Среднее арифметическое: " << srz;
}