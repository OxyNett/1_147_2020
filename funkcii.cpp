#include <iostream>
#include <cmath> 

using namespace std;

bool i;
int c=0;
float a=1.6;
float dl=0.5;
float x;
float y;
float b[6] = {1.28, 1.36, 2.47, 3.68, 4.56};
    
int main()
{
    cout << "Запустить задачу A/B? (1/0)" << endl;
    cin >> i;
    if (i)
    {
    	for (x = 1.2; x<3.8; x=x+dl) 
    	{
        y=pow(a,pow(x,2)-1)-log10(pow(x,2)-1)+pow((pow(x,2)-1),1/3);
        b[c]=y;
        c=c+1;
    	}
    }
    else
    {
    	for (int c = 0; c<5; c++) 
    	{
        y=pow(a,pow(b[c],2)-1)-log10(pow(b[c],2)-1)+pow((pow(b[c],2)-1),1/3);
        b[c]=y;
    	}
    }
    for (c = 0; c<6; c++)
    {
      if (b[c]!=0)
      {
        cout << b[c] << endl;
      }
    }
}