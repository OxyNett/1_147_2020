﻿#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person
{
public:
    string name;
    int age;
    int mark;
    Person(string n, int a, int m)
    {
        name = n;
        age = a;
        mark = m;
    }
    Person(string n)
    {
        name = n;
        age = 18;
        mark = 3;
    }
    Person()
    {
        name = "Bob";
        age = 18;
        mark = 5;
    }
    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{
    Person tom("Tom", 22, 4);
    cout << "Name: " << tom.name << "\tAge: " << tom.age << "\tMark: " << tom.mark << endl;
    Person sam("Sam");
    cout << "Name: " << sam.name << "\tAge: " << sam.age << "\tMark: " << sam.mark << endl;
    Person bob = Person();
    cout << "Name: " << bob.name << "\tAge: " << bob.age << "\tMark: " << bob.mark << endl;
    return 0;
}