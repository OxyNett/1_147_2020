//16 по списку

//задача

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
	double a = 2.0;
	double b = 1.1;
	double x;
	double y;

	double logarifm;
	double modyl1;
	double modyl2;
	double koren;

	cout << "znachenie X iz tablitsi: ";      //задаём значение X с клавиатуры 
	cin >> x;

	modyl1 = abs(b * b - x * x);              //вычисляет первый модуль
	logarifm = log(modyl1) / log(a);          //вычисояет логарифм модуля1 по основанию а
	modyl2 = abs(x * x - a * a);              //вычисляет второй модуль
	koren = pow(modyl2, 1.0 / 5.0);           //вычисляет корень пятой степени



	//так как нельзя делить на ноль, то проверим некоторое условие

	if (koren != 0)
	{
		y = logarifm / koren;
		cout << y;
	}
	else
	{
		cout << "na nol delit nelza" << "y ne syshestvyet";
	}


}


     

