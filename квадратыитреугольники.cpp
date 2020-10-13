//целый квадрат из звёздочек

/*

#include <iostream>
using namespace std;

int main ()

{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			cout << "**";
		}
		cout << endl;
     }
}

*/


//только рамка квадрата

/*

#include <iostream>
using namespace std;

int main()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if ( ((x == 0) or (x == 9))  or  ((y == 0) or (y == 9)) )
			{
				cout << "**";
			}
			else
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}

*/

//треугольник слева

/*

#include <iostream>
using namespace std;

int main()
{
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if ( x <= y )
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}

*/
/