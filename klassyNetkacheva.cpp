#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person
{
 public:
string name;
int age;
double mark;
 Person(string n, int a, double m)
{
name = n;
age = a;
mark = m;
}
 Person(string n, int a)
{
name = n;
age = a;
mark = 5;
}
 Person(string n)
{
name = n;
age = 18;
mark = 5;
}
 Person()
{
name = "Bob";
age = 18;
mark = 5;
}
 void move()
{
cout « name « " is moving" « endl;
}
};
 int main()
{
Person gleb("Gleb", 23, 4.5);
 cout « "Name: " « gleb.name « "\tAge: " « gleb.age « "\tMark: " « gleb.mark « endl;
Person tom("Tom", 22);
 cout « "Name: " « tom.name « "\tAge: " « tom.age« "\tMark: "«tom.mark« endl;
Person sam("Sam");
 cout « "Name: " « sam.name « "\tAge: " « sam.age « "\tMark: " « sam.mark « endl;
Person bob = Person();
 cout « "Name: " « bob.name « "\tAge: " « bob.age « "\tMark: " « bob.mark « endl;
return 0;
}