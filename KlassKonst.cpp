//Задача : Город (население года, страна, население страны)

#include <iostream>
#include <string>
using namespace std;

class Location
{
  public:

	Location(string city, string country, int population, int population2)
	{
		this->city = city;
		this->country = country;
		SetPopulation(population);
		GetPopulation2(population2);
	}

	Location (string city): Location (city, "", 0, 147000000) {}

	void Display() 
	{
		cout << "city:" << city << " " << "country:" << country << " " << endl;
		cout << "population_city:" << population << " " << "population_country:" << population2 << endl;
		cout << endl;
	}

	//впринцепе, в данной программе диструктор и не нужен.
	/*
	~Location() 
	{
		cout << "Memory has been cleaned. Good bye." << endl;
	}
	*/

	void SetPopulation(int population) 
	{
		if (population >= 5000 && population <= 1000000000)
		{
			this->population = population;
		}
	}

	void GetPopulation2(int population2)
	{
		this->population2 = population2;
	}

  private:
	string city;
	string country;
	int population = 5000;
	int population2;
};


int main()
{
	Location *gorod1 = new Location ("Ivanovo", "Russia", 450000, 147000000 );
	gorod1->Display();
	Location *gorod2 = new Location ("Moscow", "Russia", 2000000, 147000000);
	gorod2->Display();
	Location *gorod3 = new Location("Samara");
	gorod3->Display();
	Location* gorod4 = new Location("California", "USA", 40000000, 329000000);
	gorod4->Display();
	return 0;
}