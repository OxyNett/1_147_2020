#include <iostream>


int main()
{
	/*int i = 1;
	while (i < 10)
	{
		std::cout << i << "*" << i << "=" << i * i << std::endl;
		i++;
	}

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			std::cout << i * j << "\t";
		}
		std::cout << std::endl;
	}*/

	/*int i = 6;
	do
	{
		std::cout << i << std::endl;
		i--;
	} while (i > 0);

	int i = 1;
		for (; ; )
		{
			std::cout << i << "*" << i << "=" << i * i << std::endl;
			i++;
			if (i > 9) break;
		}*/

	/*int result = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0) continue;
		result += i;
	}
	std::cout << "result = " << result << std::endl;*/

	/*for (int j = 1; j < 10; ++j)
	{
		int g = 10;
		for (int i = 1; i <g; ++i)
		{
			if (i <= j)continue;
			std::cout << "**";
		}

		std::cout << "\n";
	}*/

	/*for (int j = 1; j < 10; ++j)
	{

		int g = 1;
		for (int i = 10; i > g; --i)
		{
			if (j >= i)
			std::cout << "**";
			else
			std::cout << "  ";
		}

		std::cout << "\n";
	}
	*/

	/*for (int i = 1; i < 10; ++i)
	std::cout << "**";
	std::cout << "\n";
	for (int i = 1; i < 10; ++i)
		std::cout << "**";
	std::cout << "\n";
	for (int j = 2; j < 7; ++j)
	{
		for (int i = 1; i < 10; ++i)
		{
			if ((i+2!=11)&&(i!=1))
				std::cout << "  ";
			else
				std::cout << "**";
		}

		std::cout << "\n";
	}
	for (int i = 1; i < 10; ++i)
		std::cout << "**";
	std::cout << "\n";
	for (int i = 1; i < 10; ++i)
		std::cout << "**";
	std::cout << "\n";*/

	/*for (int j = 1; j < 10; ++j)
	{
		for (int i = 1; i < 10; ++i)
			std::cout << "**";
		std::cout << "\n";
	}*/

	/*int g = 0;
	std::cout << "Enter the number:";
	std::cin >> g;
	for (int j = 0; j < g; ++j)
	{
		for (int i = 0; i < g; ++i)
			std::cout << "**";
		std::cout << "\n";
	}*/
	/*int a = 0;
	int b = 0;
	std::cout << "Enter the numbers a and b:";
	std::cin >> a;
	std::cin >> b;
	for (int j = 0; j < a; ++j)
	{
		for (int i = 0; i < b; ++i)
			std::cout << "*";
		std::cout << "\n";
	}*/
	/*int g = 1;
	int a = 0;
	std::cout << "Enter the number:";
	std::cin >> a;
	for (int j = g; j <= a; ++j)
	{

	
		for (int i = a; i >= g; --i)
		{
			if (j == i )
				std::cout << "**";
			else if(j==((a+1) - i))
				std::cout << "**";
			else
				std::cout << "  ";
		}

		std::cout << "\n";
	}*/
	
}
	