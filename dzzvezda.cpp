// задача 1 - Пользователь вводит целое число, на экране этой размерности рисуется квадрат
/*

#include <iostream>
using namespace std;


int main()
{
	int N;

	cin >> N;

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

*/


//задача 2 - Пользователь вводит целое число, на экране этой размерности рисуется крест из диагоналей этого квадрата.
/*

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int y = 0; y < N; y++)
	{
		for (int x = 0; x < N; x++)
		{
			if ( (x == y)  or (x == N-1-y) )
			{
				cout << "**";
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

*/


//задача 3 - пользователь вводит два числа с длинами сторон и на экране выводится прямоугольник
/*

#include <iostream>
using namespace std;

int main()
{
	int A;
	int B;

	cout << "vvedite 1 storony: ";
	cin >> A;
	cout << "vvedite 2 storony: ";
	cin >> B;

	for (int y = 0; y < A; y++)
	{
		for (int x = 0; x < B; x++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

*/



//задача 4 - на экране выводятся символы, пока пользователь не введёт любое число
//не получилось