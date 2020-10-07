﻿#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


void TaskOne();
void TaskTwo();
void TaskThree();
void TaskFour();

int main()
{
	TaskOne();
	TaskTwo();
	TaskThree();
	TaskFour();

}
void TaskOne()
{
	int a = 0;
	cout << "Enter length of a side." << endl;
	cin >> a;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < a; x++)
		{
			if ((y == 0) || (y == a - 1) || (x == 0) || (x == a - 1))
				cout << "##";
			else
				cout << "  ";
		}
		cout << endl;
	}
}

void TaskTwo()
{
	int a = 0;
	cout << "Enter length of a side." << endl;
	cin >> a;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < a; x++)
		{
			if ((y == x) || (a - x == y + 1))
				cout << "##";
			else
				cout << "  ";
		}
		cout << endl;
	}
}

void TaskThree()
{
	int a = 0;
	int b = 0;
	cout << "Enter dimensions of a rectangle." << endl;
	cin >> a >> b;
	for (int y = 0; y < a; y++)
	{
		for (int x = 0; x < b; x++)
		{
			if ((y == 0) || (y == a - 1) || (x == 0) || (x == b - 1))
				cout << "##";
			else
				cout << "  ";
		}
		cout << endl;
	}
}

void TaskFour()
{
	INPUT_RECORD event;
	bool isKeyPressed = false;
	do
	{
		HANDLE handle = GetStdHandle(STD_INPUT_HANDLE);
		DWORD count;

		if (WaitForSingleObject(handle, 0) == WAIT_OBJECT_0) 
		{
			ReadConsoleInput(handle, &event, 1, &count);
			if ((event.Event.KeyEvent.wVirtualKeyCode >= 0x30) & (event.Event.KeyEvent.wVirtualKeyCode <= 0x39))
				isKeyPressed = true;
		}
		else
			cout << "#";
	} while (!isKeyPressed);
}
