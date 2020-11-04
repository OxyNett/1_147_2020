#include <iostream>
#include <conio.h>
#include <cstdlib>
#include "time.h"
#include <cstdlib>



using namespace std;

void play();
int z = 50;

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	while (a != 2)
	{
		cout << "1) сыграть"<< endl;
		cout<< "2) выйти из игры" << endl;
		cout << "введи ";

		cin>> a;

		switch (a)
		{
			
		case(1):  play();
			
			break;
		case(2): a = 2;
			break;
		}
	}



	return 0;
}

void play()
{




	int s ;
	srand(time(NULL));
	int c = 1 + rand() % 5;
	cout << c << endl;
	cout << "монеты :" <<  z << endl;
	cout <<  "введи число " << endl;
	cin>> s;


	if (c == s)
	{
		cout << "числа равны" << endl;
		z = z + 30; cout << "монеты:" << z << endl;
	}
	else
	{
		cout << "числа не равны " << endl;
		z = z - 10; cout << "монеты:" << z << endl;
	}

	
}