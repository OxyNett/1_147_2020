﻿#include <iostream>
int main()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (y > 0 + x) std::cout << "**";
			else std::cout << "  ";
		}
		std::cout << std::endl;
	}
}
