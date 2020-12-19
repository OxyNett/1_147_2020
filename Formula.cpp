#include <iostream>
#include <math.h>

using namespace std;

const float a = 0.4;
const float b = 0.8;

float x_beginning = 3.2;
float y;


void FormulaDelta()
{
	cout << "Return with fixated delta" << "\n\n";

	for (x_beginning; x_beginning <= 6.2; x_beginning += 0.6)
	{
		y = ((pow(a, x_beginning) - pow(b, x_beginning)) / (log(a/b) / log(10))) * pow(a * b, 0.333333333);
		cout << y << endl;
	}
}

void FormulaX()
{
	cout << "\nReturn with x1.. x2.. etc" << "\n\n";

	float x1, x2, x3, x4, x5;

	x1 = 4.48;
	x2 = 3.56;
	x3 = 2.78;
	x4 = 5.28;
	x5 = 3.21;

	float array[] = { x1,x2,x3,x4,x5 };

	for (int i = 0; i <= 4; i++)
	{
		y = ((pow(a, array[i]) - pow(b, array[i])) / (log(a/b) / log(10))) * pow(a * b, 0.333333333);
		cout << y << endl;
	}
}

int main()
{
	FormulaDelta();
	FormulaX();
	
	return 0;
}
