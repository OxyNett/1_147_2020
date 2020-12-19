#include <iostream>

using namespace std;

int main() 
{
  for(int i=1; i<10; i++)
  {
    for(int j=1; j<10; j++)
    {
      if((i==1) or (j==1) or (i==9) or (j==9))
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