#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    for (int i = 1; i < a+1; i++){
        for (int j = 1; j < a+1; j++){
        if ((i == 1) or (j == 1) or (i == a) or (j == a))
        {
            cout << "##";
        }
        else cout << "  ";  
     }
     cout << endl;
    }
    return 0;
}