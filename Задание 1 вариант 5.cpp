﻿#include <iostream>
#include <cmath>
using namespace std;
void random(int(*matrix)[15], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 100 - 80;
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
}
void TANsumma(int(*matrix)[15], int n, int m)
{
	double tg;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > 0) {
				sum = sum + matrix[i][j];
			}

		}


	}
	cout << "s=" << sum << " ";
	tg = sin(sum) / cos(sum);
	cout << "tan=" << tg << " ";

}
void random1(int(*matrix)[6], int n, int m)
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 100 - 80;
			cout << matrix[i][j] << "   ";
		}
		cout << "\n";
	}
}
void TANsumma1(int(*matrix)[6], int n, int m)
{
	double tg;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < m; j++) {
			if (matrix[i][j] > 0) {
				sum = sum + matrix[i][j];
			}

		}


	}
	cout << "s=" << sum << " ";
	tg = sin(sum) / cos(sum);
	cout << "tan=" << tg << " ";
}
int main()
{
	const int k = 8;
	const int p = 6;
	const int n = 10;
	const int m = 15;
	int A[k][p];
	int Z[n][m];
	cout << " A" << endl;
	random(Z, n, m);
	cout << "TAN SUMMA > 0" << endl;
	TANsumma(Z, n, m);
	cout << "\n";
	cout << " " << endl;
	cout << " B" << endl;
	random1(A, k, p);
	cout << "TAN SUMMA > 0" << endl;
	TANsumma1(A, k, p);
	return 0;
}
