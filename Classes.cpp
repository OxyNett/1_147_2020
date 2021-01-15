#include <iostream>
using namespace std;

class Human
{

private:

    string name;
    int year;
    float body_weight;

public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << year << endl;
        cout << "Weight: " << body_weight << endl;
    }

    void setName(string name) {
        this->name = name;
 
    Human(string name, int year, float body_weight)
    {
        this->name = name;
        this->year = year;
        this->body_weight = body_weight;
    }
};

int main()
{
    Human* obj_Human = new Human("Vasya", 12, 80);
    obj_Human->display();
    obj_Human->setName("Ivan");
    obj_Human->display();

    return 0;
}
