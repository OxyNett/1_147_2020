#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Input the size of square\n";
    cin >> size;
    for (int i = 1; i < size+1; i++){
        for (int j = 1; j < size+1; j++){
        if ((i == 1) or (j == 1) or (i == size) or (j == size))
        {
            cout << "##";
        }
        else cout << "  ";  
     }
     cout << endl;
    }
    return 0;
}