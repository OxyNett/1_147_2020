#include <iostream>
using namespace std;
int main(){
    cout << "Input size of the square\n";
    int size;
    cin >> size;
    for (int i = 1; i < size; i++){
        for (int j = 1; j < size; j++){
        if ( (i == j) or (size-j == i) )
        {
            cout << "##";
        }
        else cout << "  ";  
     }
     cout << endl;
    }
    return 0;
}