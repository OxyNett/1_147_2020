// Блюдо меню
#include <iostream>
#include <string>
using namespace std;

class Dish
{
public:
	string name;
	string weight;

	Dish (string name, string weight, int price)
	{
		this->name = name;
		this->weight = weight;
		this->price = price;
	}
	Dish (string name, int weight, int price)
	{
		this->name = name;
		this->weight = weight;
		this->price = price;
	}
	Dish(string name):Dish(name, "190 g", 200) {}

	
	void Display() {
		cout << name << " " << weight << " " << price << endl;
	}

	~Dish() {
		cout << "Destraction position" << endl;
	}

	void SetPrice(int price)
	{
		if (price >= 0 && price <= 180)
		{
			this->price = price;
		}

	}
	int getPrice()
	{
		return price;
	}

private:
	int price;
};

int main()
{
	Dish cheescake("Cheesecake", "130 (g)", 200);
	cheescake.Display();
	Dish maffin("Maffin", "100 (g)", 150);
	maffin.SetPrice(100);
	maffin.Display();
	return 0;
}