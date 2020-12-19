#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c; // ax**2 + bx + c = 0
	double discriminant, x1, x2;

	cout << "Enter three int numbers to count discriminant" << endl;

	cin >> a >> b >> c;

	discriminant = b * b - 4 * a * c;
	
	if (discriminant < 0)
	{
		cout << "There is no roots" << endl;
	}
	else if (discriminant == 0)
	{
		x1 = -b / 2 * a;
		cout << "x = " << x1 << endl;
	}
	else
	{
		x1 = (-b + sqrt(discriminant)) / (2 * a);
		x2 = (-b - sqrt(discriminant)) / (2 * a);

		cout << "First root is " << x1 << endl;
		cout << "Second root is " << x2 << endl;

	}
	return 0;
}
