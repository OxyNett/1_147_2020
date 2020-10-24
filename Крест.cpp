#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    std::cout << "Введите длину стороны квадрата, для вывода креста: ";
    std::cin >> a;
    for (int y = 0; y < a; y++)
    {
        for (int x = 0; x < a; x++)
        {
            if ((x == y) || (x + 1 == a - y))
                std::cout << "**";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }

}