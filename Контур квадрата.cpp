#include <iostream>
using namespace std;

int main() 
{
  for(int x=1; x<11; x++)
  {
    for(int y=1; y<10; y++)
    {
      if((i==1) or (j==1) or (i==10) or (j==10))
      {
        cout << "##";
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
