#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Rifleweapons
{
private:
	string variety;
	string name;
	double calibre;

public:

	char ch1 = (40);
	char ch2 = (41);
	char ch3 = (174);
	char ch4 = (45);


	Rifleweapons(string variety, string name, double calibre)
	{
		this->variety = variety;
		this->name = name;
		this->calibre = calibre;
	}

	Rifleweapons(string name, double calibre)
	{
		this->variety = "Assault rifle";
		this->name = name;
		this->calibre = calibre;
	}

	void riafulweapon(double calibre)
	{
		if (calibre > 0)
		{
			this->calibre = calibre;
		}
	}

	void lubluconsol()
	{
		cout << '\n' << "А всё, оружие не работает. Иди решай проблему словами" << endl;
	}

	void nya()
	{
		cout << '\n' << "War, war never changes";
		//а какой можно 3-й метод для класса можно придумать, помогите и я исправлю этот код;
		cout << '\n' << '\n' << '\n' << ch1 << ch3 << ch4 << ch3 << ch2 << '\n' << '\n' << '\n' << endl;
	}

	void display()
	{
		cout << '\n' << variety << " >> " << name << " калибра " << calibre << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "В свойситвах консоли измените шрифт на 'Lucida Console' и перезапустите программу для корректного отображения текста" << "\n" << "\n";

	Rifleweapons my_weapon("Pistol", "Colt M1911", 45);
	my_weapon.riafulweapon(-2);
	my_weapon.display();

	Rifleweapons enemy_weapon("Assault rifle", "AK-47", 7.62);
	enemy_weapon.riafulweapon(5.56);
	enemy_weapon.display();

	my_weapon.nya();
	my_weapon.lubluconsol();

	return 0;
}