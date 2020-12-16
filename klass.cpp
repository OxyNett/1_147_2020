#include <iostream>
#include <string>

using namespace std;

class employee
{
  public:
      string name, company;
      int data; 
      employee(string n, string c, int d)
      {
          name = n;
          company = c;
          data = d;
      }
      void working(bool b)
      {
          if (b)
              cout << "Rabotnik " << name << " work "<< endl;
          else
              cout << "Rabotnik " << name << " relax " << endl;
      }
      void experience(int d)
      {
           cout << "Rabotnik " << name << " propabotal " << d-data << " let!" << endl;
      }
};
int main()
{
    employee* first = new employee("Sasha", "Cleaning pro+", 2017);
    employee* second = new employee("Liza", "Apple company", 2019);
    string name3, company3; 
    int year3;
    cout << "Vvedite name, company, year of work of the employee" << endl;
    cin >> name3 >> company3 >> year3;
    employee* third = new employee(name3, company3, year3);

    cout << first->company << endl;
    cout << second->company << endl;
    cout << third->company << endl;

    first->working(true);
    first->experience(2020);

    second->working(true);
    second->experience(2020);

    bool b3;
    string answer;
    cout << "Will the third work?";
    cin >> answer;
    if (answer == "yes")
        b3 = true;
    else
        b3 = false;
    third->working(b3);
    third->experience(2020);

    return 0;
}
