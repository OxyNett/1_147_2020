//задача 1 (выводит квадраты чисел от 1 до 10)
/*

#include <iostream>

int main()
{
 int i = 1;

	while (i < 10)
	{
	   std::cout << i << " * " << i << " = " << i * i << std::endl;
	   i++;
	}

 return 0;
}

*/



//задача 2 (к кажому числу от 1 до 9 в столбик прибавляет это число)
/*

#include <iostream>

int main()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			std::cout << i * j << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}

*/


//задача 3 (выводит числа от 6 до 1)
/*

#include <iostream>

int main()
{
	int i = 6;

	do
	{
		std::cout << i << std::endl;
		i--;
	}

	while (i > 0);

	return 0;
}

*/


//задача 4 (умножает все числа от 1 до 9 сами на себя)
/*

#include <iostream>

int main()
{
	int i = 1;
	for (; ; )
	{
		std::cout << i << " * " << i << " = " << i * i << std::endl;
		i++;
		if (i > 9) break;
	}

	return 0;
}

*/


//задача 5 (выводит 25)
/*

#include <iostream>

int main()
{
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0) continue;
		result += i;
	}
	
	std::cout << "result = " << result << std::endl;
	return 0;
}

*/