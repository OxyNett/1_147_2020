#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите сторону квадрата: ";
	cin >> a;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < a; x++)
		{
			std::cout << "**";
		}
		std::cout << std::endl;
	}
}