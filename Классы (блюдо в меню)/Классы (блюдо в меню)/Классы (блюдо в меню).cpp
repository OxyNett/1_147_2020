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
	void SetPrice(int price)
	{
		if (price >= 0 && price <= 200)
		{
			this->price = price;
		}

	}
	int getPrice()
	{
		return this->price = price;
	}
	
	void Display() {
		cout << name << " " << weight << " " << price << endl;
	}

	~Dish() {
		cout << "Destraction position" << endl;
	}
private:
	int price;
};
int main()
{
	Dish cheesecake("Cheesecake", "130 (g)", 200);
	Dish maffin("Maffin", "100 (g)", 150);
	cheesecake.Display();
	cheesecake.SetPrice(50);
	cheesecake.Display();
	maffin.Display();
	maffin.SetPrice(100);
	maffin.Display();
	return 0;
}