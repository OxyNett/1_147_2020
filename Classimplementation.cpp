#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class rifleweapons
{
public:

	string variety;
	string name;
	string calibre;

	void setweapon()
	{
		cout << "Введите тип оружия (Пистолет, автомат, пистолет-пулемёт, винтовка, ружьё или карабин" << "\n";
		cin >> variety;
		cout << "Введите название оружия" << "\n";
		cin >> name;
		cout << "Введите калибр оружия" << "\n";
		cin >> calibre;
		cout << " <3 ";
		system("cls");
	}

	void Display() 
	{
		cout << '\n' << this->variety << " >> " << this->name << " калибра " << this->calibre << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "В свойситвах консоли измените шрифт на 'Lucida Console' и перезапустите программу для корректного отображения текста" << "\n";

	rifleweapons my_weapon;
	my_weapon.setweapon();

	rifleweapons enemy_weapon;
	enemy_weapon.setweapon();

	my_weapon.Display();
	enemy_weapon.Display();

	return 0;
}