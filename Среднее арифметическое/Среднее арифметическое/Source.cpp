#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, res;
	cout << "ќпределение среднего арифметического чисел.\n";
	cout << "¬ведите первое число: "; cin >> a;
	cout << "¬ведите второе число: "; cin >> b;
	cout << "¬ведите третье число: "; cin >> c;
	cout << "¬ведите четвертое число: "; cin >> d;
	res = a + b + c + d;
	res /= 4;
	cout << "—реднее арифметическое чисел: " << res << endl;
	return 0;
}