#include <iostream>
#include<string>
using namespace std;

class Person
{
private:

     double avermark;

public:

    string name;
    int age;

    Person(string n, int a, double aver)
    {
        name = n; 
        age = a; 
        avermark = aver;
    }

    void changemark(double avermark)
    {
        if (avermark >= 0)
            this->avermark = avermark;
    }

    void move()
    {
        cout << name << " is moving" << endl;
    }

    void display()
    {
        cout << '\n' << "Name: " << name << "\tAge: " << age << "\tAverage mark: " << endl;
    }
};
int main()
{
    Person person = Person("Tom", 22, 3.5);
    person.changemark(-4);
    person.display();
    person.move();

    return 0;
}