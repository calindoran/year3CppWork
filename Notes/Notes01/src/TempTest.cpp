/*
Calin Doran
Advance Programming: Notes/Rough Work
Test.cpp
*/

#include <iostream> //used for cout/cin

using namespace std; //used so I dont need to use std::cout;

int lab1() //Lab Notes 1
{
	int x;
	x = 4 + 2;
	cout << x / 3 << "" << x * 2;

	return 0;
}

int lab2() //Lab Notes 2
{
	int row = 0;
	int col = 0;

	for (row = 0; row <= 3; row++)
	{

		for (col = 0; col <= row; col++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int test123() //Lab testing 123
{
	int row = 0;
	int colm = 0;

	for (row = 0; row <= 3; row++)
	{
		for (colm = 0; colm <= row; colm++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (row = 3; row >= 0; row--)
	{
		for (colm = 0; colm <= row; colm++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}