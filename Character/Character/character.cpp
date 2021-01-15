/* main.cpp */
#include <iostream>
#include "character.h"
using namespace std;

int main()
{
	Character rav1("The fist character of the game: ");
	Character var1("Himkek", "University", 100);
	var1.Disp();
	Character rav2("The second character of the game: ");
	Character var2("Kooperator", "Person", 101);
	var2.Disp();
	return 0;
}
