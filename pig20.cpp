#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person
{
public:
	string text;
	string variant;
	string animal;
	string name;
	string color;
	int age;
	double weight;
	string conclusion;
	Person(string t, string v, string a, string n, string c, int b, double w, string e)
	{
		text = t;
		variant = v;
		animal = a;
		name = n;
		color = c;
		age = b;
		weight = w;
		conclusion = e;
	}
	Person(string a, string n, string c,string p,string e)
	{
		animal = a;
		name = n;
		color = p;
		age = 7;
		weight = 300;
		conclusion = e;
	}
	void move()
	{
		cout << name << "" << endl;
	}

	
};
int main()
{
	setlocale(LC_ALL, "ru");
	Person pig1("Нажмите кноку 'Enter', чтобы убить свинью и получить с нее сало","1. Успеть убить свинью в возрасте 5 лет и получить 30 кг свежего сала \n         2. Убить свинью в 7 лет и получить 30 кг плохого сала", "Pig", "Hryun Morzhov", "Black", 5, 320, "");
	//cout << "Animal: " << pig.animal << "\tName: " << pig.name << "\tColor: " << pig.color << "\tAge: " << pig.age << "\tWeight: " << pig.weight << endl;
	cout << "Text: " << pig1.text << endl;
	cout << "Variant: " << pig1.variant << endl;
	cout << "Animal: " << pig1.animal << endl;
	cout << "Name: " << pig1.name << endl;
	cout << "Color: " << pig1.color << endl;
	cout << "Age: " << pig1.age << endl;
	cout << "Weight: " << pig1.weight << endl << "\n";
	

	Person pig2("", "", "", "", "Pink", 7, 300, "Вы выбрали 1 вариант и получили 30 кг свежего сала!");
	//cout << "Animal: " << pig.animal << "\tName: " << pig.name << "\tColor: " << pig.color << "\tAge: " << pig.age << "\tWeight: " << pig.weight << endl;
	//cout << "Animal: " << pig2.animal << endl;
	//cout << "Name: " << pig2.name << endl;
	//cout << "Color: " << pig2.color << endl;
	cout << "Color: " << pig2.color << endl;
	cout << "Age: " << pig2.age << endl;
	cout << "Weight: " << pig2.weight << endl << "\n";
	cout << "Conclusion: " << pig2.conclusion << endl;

	return 0;

}