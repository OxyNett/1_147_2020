// Блюдо меню
#include <iostream>
#include <string>
using namespace std;

class Position
{
public:
	string name;
	string weight;
	int price;

	Position(string name, string weight, int price)
	{
		this->name = name;
		this->weight = weight;
		this->price = price;
	}

	void Display() {
		cout << name << " " << weight << " " << price << endl;
	}

	~Position() {
		cout << "Destraction position" << endl;
	}

	void SetPopulation(int price)
	{
		if (price >= 0 && price <= 180)
		{
			this->price = price;
		}

	}

};


int main()
{
	Position my_loc("Cheesecake", "130 (g)", 200);
	my_loc.Display();
	return 0;
}