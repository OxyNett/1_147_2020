#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float y, a, b, x, ch, zn;
	a=4.1;
	b=2.7;
	cout << "¹1" << endl;
	for (x = 1.2; x < 5.2; x = x + 0.08)
	{
		ch = a * sqrt(x) - b * (log(x)/log(5));
		zn = log10(abs(x - 1));
		y = ch / zn;
		cout << y << endl;
	}
	cout << "¹2" << "Input x" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		ch= a * sqrt(x) - b * log(x);
		zn = log10(abs(x - 1));
		y = ch / zn;
		cout << y << endl;
	}
	return 0;
}