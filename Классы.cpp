﻿#include <iostream>
#include <string>
using namespace std;


class Computer
{
public:
	void changeVolume(int volume)
	{
		if (volume > 0)
		{
			this->volume = volume;
		}
	}
	void display()
	{
		cout << name << "\t" <<volume << "Gb" << endl;
	}
	Computer(int volume, string name)
	{
		this->name = name;
		if (volume > 0)
		{
			this->volume = volume;
		}
		else
		{
			this->volume = 0;
		}
	}
private:
	int volume;
	string name;
};
int main()
{
	Computer my_loc(1024, "Mac");
	Computer second_loc(2048,"isus");
	my_loc.display();
	second_loc.display();
	return 0;
}