#include <iostream>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, res;
	cout << "����������� �������� ��������������� �����.\n";
	cout << "������� ������ �����: "; cin >> a;
	cout << "������� ������ �����: "; cin >> b;
	cout << "������� ������ �����: "; cin >> c;
	cout << "������� ��������� �����: "; cin >> d;
	res = a + b + c + d;
	res /= 4;
	cout << "������� �������������� �����: " << res << endl;
	return 0;
}