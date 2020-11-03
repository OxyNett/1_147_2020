#include <iostream>

int main()
{
	using namespace std;
	int k, l; cout << "Enter size: "; cin >> k;
	l = k / 2;
	for (int x = 0;x < k;x++)
	{
		for (int y = 0;y < k;y++)
		{
			if ((y == 0) || (y == l) || (y == (k - 1)) || (x == 0) || (x == l) || (x == (k - 1)))
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