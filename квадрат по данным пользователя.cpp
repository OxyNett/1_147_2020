#include "cstdio"
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	std::printf("Введите размер");
	std::printf("длины и ширины через пробел");
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if ((i == 0) or (j == 0) or (i == a - 1) or (j == b - 1)) cout << "|";
			else cout << " ";
		}
		cout << endl;
	}
	return 0;


}
