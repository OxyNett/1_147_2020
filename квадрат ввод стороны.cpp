#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int z;
	cout << "введи длину стороны:";
	cin >> z;
	for (int y = 0; y < z; y++)
	{
		for (int x = 0; x < z; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}