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
    double middleRange;
    Person(string n, int a, double b)
    {
        name = n;
        age = a;
        middleRange = b;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
        middleRange = 59.9;
    }
    Person(string n)
    {
        name = n;
        age = 18;
        middleRange = 48.8;
    }
    Person()
    {
        name = "Bob";
        age = 18;
        middleRange = 37.7;
    }
    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{   
    Person gleb("Gleb", 37,89.0);
    cout << "Name: " << gleb.name << "\tAge: " << gleb.age << " \tMiddlerange " << gleb.middleRange << endl;
    Person tom("Tom", 22);
    cout << "Name: " << tom.name << "\tAge: " << tom.age << " \tMiddlerange " << tom.middleRange  << endl;
    Person sam("Sam");
    cout << "Name: " << sam.name << "\tAge: " << sam.age << " \tMiddlerange " << sam.middleRange  << endl;
    Person bob = Person();
    cout << "Name: " << bob.name << "\tAge: " << bob.age << " \tMiddlerange " << bob.middleRange  << endl;
    return 0;
}