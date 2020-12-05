#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    float a = 0;
    float b = 0;
    scanf_s("%d %d", &a, &b); //сначала запрашивает 'a', потом 'b'

    if (a != 0)
    {
        double x = -b / a;
        std::printf("solution: %d\n", x);
    }
    else
        cout << "na nol delit nelsya";

}
