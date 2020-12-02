// KlassNet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

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
    double ball;

    Person(string n, int a, double b)
    {
        name = n;
        age = a;
        ball = b;
    }

    Person(string n, int a)
    {
        name = n;
        age = 18;
        ball = 4.5;
    }

    Person(string n)
    {
        name = n;
        age = 18;
        ball = 3.8;
    }

    Person()
    {
        name = "Tom";
        age = 18;
        ball = 4.2;
    }

    void move()
    {
        cout << name << " is moving" << endl;
    }
};
int main()
{
    Person masha("Masha", 13, 4.8);
    cout << "Name: " << masha.name << "\tAge: " << masha.age << "\tball: " << masha.ball << endl;
    Person sam("Sam");
    cout << "Name: " << sam.name << "\tAge: " << sam.age << "\tball: " << sam.ball << endl;
    Person bob = Person();
    cout << "Name: " << bob.name << "\tAge: " << bob.age << "\tball: " << bob.ball << endl;
    Person tom("Tom", 22);
    cout << "Name: " << tom.name << "\tAge: " << tom.age << "\tball: " << tom.ball << endl;
    return 0;
}