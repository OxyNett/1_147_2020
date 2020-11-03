#include <iostream>

int main()
{
	using namespace std;
	int d; cout << "Enter size: "; cin >> d;
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