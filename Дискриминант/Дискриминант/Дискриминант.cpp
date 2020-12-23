#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, D, x, x1, x2;
	cout << "Solving an Equation Using the Discriminant." << endl;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter c: "; cin >> c;
	D = b * b - 4 * a * c;
	if (D < 0)
	{
		cout << "Discriminant = " << D << ", which is less than 0, therefore there are no roots." << endl;
	}
	if (D == 0)
	{
		x = (-b) / (2 * a);
		cout << "Discriminant = " << D << "." << endl;
		cout << "Root of the equation = " << x << "." << endl;
	}
	else
	{
		cout << "Discriminant = " << D << "." << endl;
		x1 = ((-b) + sqrt(D)) / (2 * a);
		cout << "The first root of the equation = " << x1 << "." << endl;
		x2 = ((-b) - sqrt(D)) / (2 * a);
		cout << "The second root of the equation = " << x2 << "." << endl;
	}
	return 0;
}