﻿#include <iostream>
#include <cstdio>   // "Русский язык топ"
int main()
{
	std::cout << "Введите 4 числа";
	float a, b, c, d;
	std::cin >> a >> b >> c >> d;
	float aver = (a + b + c + d) / 4;
	std::cout << "Среднее арифметическое: " << aver;
	std::cin >> d;
	return 0;
}
