#include <iostream>
#include <cstdio>
int main()
{
	std::cout << "vvedite 4 chisla";
	float a, b, c, d;
	std::cin >> a >> b >> c >> d;
	float v = (a + b + c + d) / 4;
	std::cout << "v(cr): " << v;
	std::cin >> d;
	return 0;
}