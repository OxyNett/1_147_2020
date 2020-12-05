//Задача : Город(население, страна)

#include <iostream>
#include <string>
using namespace std;

class Location
{
public:
	string name;
	string country;
	


	Location (string name, string country, int population) 
	{
		this->name = name;
		this->country = country;
		this->population = population;
	}

	void Display() 
	{
		cout << name << " " << country << " " << population << endl;
	}

	~Location()
	{
		cout << "Destruction location" << endl;
	}
	    void SetPopulation(int population) 
	    {
		    if (population >= 5000 && population <= 3000000) 
			{
			  this->population = population;
		    }

	    }
     private:
	 int population;

};


int main()
{
	Location my_loc("Ivanovo", "Russia",450000);
	my_loc.Display();
	Location gorod("Moscow", "Russia", 2000000);
    gorod.Display();
	return 0;
}
