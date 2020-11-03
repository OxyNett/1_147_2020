#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	int d; cout << "¬ведите размерность: "; cin >> d;
	for (; d != 0; d--)
	{
		for (int k = d; k != 0; k--)
		{
			cout << "||";
		}
		cout << endl;
	}
	return 0;
}