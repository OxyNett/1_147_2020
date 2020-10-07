#include <iostream>
int main()
{
std:puts("please enter a and b for 'ax + b = 0':");

float a = 0;
float b = 0;
std::scanf("%d %d", &a, &b);

if (a != 0)
{
double x = -b / a;
std::printf("solution: %d\n", x);
}
else
cout << "na nol delit nelsya";
}