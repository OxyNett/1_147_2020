#include <iostream>
using namespace std;

int main()
{

	int A[4];
	int i;
	double x;
	int N=4;
	double S = 0;


	for (i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (i = 0; i < N; i++)
	{
		S = S + A[i];
	}

	x = S /N;
	cout << x;
}