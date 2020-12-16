#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double a;
    double b;
    double c;
    double x;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    cout << "Введите c: ";
    cin >> c;
    if ((b * b - 4 * a * c) > 0) 
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1 = " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2 = " << x << endl;
    }
    if ((b * b - 4 * a * c) == 0) 
    {
        x = ((-1 * b) / (2 * a));
        cout << "Корень =" << x << endl;
    }
    if ((b * b - 4 * a * c) < 0) 
    {
        cout << "Дискриминант < 0, корней нет." << endl;
    }

    return 0;
}
