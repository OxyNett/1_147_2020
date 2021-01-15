#include <iostream>
using namespace std;
int main()
{
    int a, x;
    cout << "Vvedite a=";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (i > 1 && i < a && j>1 && j < a)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            if (i == j) cout << "*";
            if ((i + j) == (a + 1)) cout << "*";

        }
        cout << endl;
    }
    return 0;
}