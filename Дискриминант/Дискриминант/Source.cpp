#include <iostream>
#include <cmath>
using namespace std;

double a_separate_function_1()
{
	double i;
	cout << "Enter number: "; cin >> i;
	return(i);
}
void a_separate_function_2(double a, double b, double c)
{
	double D, x, x1, x2;
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
}
int main()
{
	cout << "Solving an Equation Using the Discriminant." << endl;
	double a = a_separate_function_1();
	double b = a_separate_function_1();
	double c = a_separate_function_1();
	a_separate_function_2(a, b, c);
	return 0;
}