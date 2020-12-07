#include <iostream>
#include <string>
using namespace std;

class Krolik
{
public:
int age;
int ves;
string name;

Krolik(int ves, string name, int age)
{
this->age = age;
this->ves = ves;
this->name = name;
}
Krolik(int ves, string name)
{
this->age = 1;
this->ves = ves;
this->name = name;
}

void Display()
{
cout « "Ves is " « ves « "\tName is " « name« "\tAge is " « age « endl;
}

void Move()
{
cout « name « " is moving" « endl;
}

void Jump()
{
cout « name « " is jumping" « endl;
}
};
int main()
{
Krolik pervy(4,"Vasya",2);
pervy.Display();
Krolik vtoroy(3,"Masha",3);
vtoroy.Display();
vtoroy.Jump();
Krolik tretiy(3, "Gosha");
tretiy.Display();
tretiy.Move();
return 0;
}