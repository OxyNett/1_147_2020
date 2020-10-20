#include <iostream>
using namespace std;

int main() 
{
  for(int k=1; k<11; k++)
  {
    for(int n=1; n<10; n++)
    {
      if((k==1) or (n==1) or (k==10) or (n==10))
      {
        cout << "~";
      }
      else
      {
        cout << "  ";
      }
    }
    cout << endl;
  }
  return 0;
} 
