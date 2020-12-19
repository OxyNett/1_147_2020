#include <iostream>

using namespace std;

int main() 
{
  int k;
  int kk;
  cin >> k;
  cin >> kk;
  for(int i=1; i<kk; i++)
  {
    for(int j=1; j<k; j++)
    {
      cout << "##"; 
    }
    k--;
    cout << endl;
  }
  return 0;

}
