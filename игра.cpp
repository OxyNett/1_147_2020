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
		cout << "1) �������"<< endl;
		cout<< "2) ����� �� ����" << endl;
		cout << "����� ";

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
	cout << "������ :" <<  z << endl;
	cout <<  "����� ����� " << endl;
	cin>> s;


	if (c == s)
	{
		cout << "����� �����" << endl;
		z = z + 30; cout << "������:" << z << endl;
	}
	else
	{
		cout << "����� �� ����� " << endl;
		z = z - 10; cout << "������:" << z << endl;
	}

	
}