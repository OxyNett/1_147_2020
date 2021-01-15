#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	int i; cout << "¬ведите размерность: "; cin >> i;
	for (int x = 0;x < i;x++)
	{
		for (int y = 0;y < i;y++)
		{
			if ((x == 0) || (x == (i - 1)) || (y == 0) || (y == (i - 1)))
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