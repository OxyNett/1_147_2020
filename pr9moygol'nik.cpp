#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  
    int x, y, i, j;
    cout << "Shiriny pr9moygol'nika: ";
    cin >> x;
    cout << "Visoty pr9moygol'nika: ";
    cin >> y;
    for (i = 1; i <= x; i++)
        cout << "*";
    cout << endl;
    for (j = 1; j <= y - 2; j++) {
        cout << "*";
        for (i = 1; i <= x - 2; i++)
            cout << " ";
        cout << "*" << endl;
    }
    for (i = 1; i <= x; i++)
        cout << "*";
    
    return 0;
}
    
