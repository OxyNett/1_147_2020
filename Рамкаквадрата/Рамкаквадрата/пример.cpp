#include <iostream>
int main()
{
	for (int y = 1; y < 10; y++)
	{
		for (int x = 1; x < 10; x++)
		{
			if ((x == 1) || (x == 9) || (y == 1) || (y == 9))
			{
				std::cout << "**";
			}
			else std::cout << "  ";
		}
		std::cout << std::endl;
	}
}
