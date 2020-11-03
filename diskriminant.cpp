#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double dis;
	double x1;
	double x2;

	cout << "znachenie a: ";
	cin >> a;
	cout << "znachenie b: ";
	cin >> b;
	cout << "znachenie c: ";
	cin >> c;

	dis = b * b - 4 * a * c;

	if (dis > 0)
	{
		x1 = (-1 * b) + sqrt(dis / (2 * a));
		x2 = (-1 * b) - sqrt(dis / (2 * a));
		cout << "korni ravni: " << x1 << endl << x2;
	}


	if (dis < 0)
	{
		cout << "korney net";
	}


	if (dis == 0)
	{
		x1 = (-1 * b) / (2 * a);
		cout << "koren raven: " << x1;
	}
}