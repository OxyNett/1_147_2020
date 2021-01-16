#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int ia, ib;
	cout << "сторона a:";
	cin >> ia;
	cout << "сторона b:";
	cin >> ib;
	for (int i = 0; i < ia; i++)
	{
		for (int j = 0; j < ib; j++)
		{
			i == 0 || j == ib - 1 || i == ia - 1 || j == 0 ? cout << "*" : cout << " ";

		}
		cout << endl;
	}
}