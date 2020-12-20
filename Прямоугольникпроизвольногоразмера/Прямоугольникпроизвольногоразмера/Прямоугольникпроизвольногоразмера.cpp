#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "Введите длину прямоугольника: ";
	cin >> a;
	cout << "Введите ширину прямоугольника: ";
	cin >> b;
	for (int y = 0; y < b; y++)
	{
		for (int x = 0; x < a; x++)
		{
			std::cout << "**";
		}
		std::cout << std::endl;
	}
}