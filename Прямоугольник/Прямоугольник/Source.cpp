#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int a, b, a_1, b_1; 
	cout << "¬ведите a: "; cin >> a;
	cout << "¬ведите b: "; cin >> b;
	for (int a_1 = 0;a_1 < a;a_1++)
	{
		for (int b_1 = 0;b_1 < b;b_1++)
		{
			if ((a_1 == 0) || (a_1== (a - 1)) || (b_1 == 0) || (b_1 == (b - 1)))
			{
				cout << "||";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}