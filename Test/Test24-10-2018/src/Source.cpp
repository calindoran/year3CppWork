/*
Student:	Calin Doran
Student #:	C00220175
Date:		24-10-2018
Test:		Exam 1 Advanced Programmin 2018
*/

#include <iostream>

using namespace std;

int question1()
{
	int row = 0;
	int colm = 0;

	for (row = 0; row <= 3; row++)
	{
		cout << '*';

		for (colm = 0; colm <= row; colm++)
		{
			cout<<('A');
		}
		cout<<("\n");
	}
	for (row = 2; row >= 0; row--)
	{
		cout << '*';

		for (colm = 0; colm <= row; colm++)
		{
			cout<<('A');
		}
		cout<<('\n');
	}

	cout << endl;
	system("pause");
	return 0;
}

int question2()
{
	const int len = 9;
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	int i, temp;
	int count = 0;

	cout << "Before rotation: ";
	for (i = 0; i < len; i++)
	{
		cout << " " << arr[i];
	}
	temp = arr[3];

	for (i = 0; i < len - 1; i++)
	{
		arr[i] = arr[i + 1];
		if (arr[i] == 3)
		{
			count++;
		}
	}
	arr[9 - 1] = temp;

	cout << endl << "After rotation: ";
	for (i = 0; i < len; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl <<"Count = " << count;

	cout << endl;
	system("pause");
	return 0;
}

int question3()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char hexNumber[] = "1BAF5";

	cout << endl;
	system("pause");
	return 0;
}

int main()
{
	int x;
		
		do
		{
			cout << "Enter (1-3) for question to run, (0) to exit: ";
			cin >> x;

			switch (x)
			{
			case 1:
			{
				question1();
				break;
			}
			case 2:
			{
				question2();
				break;
			}
			case 3:
			{
				question3();
				break;
			}
			default:
				break;
			}
		} while (x != 0);
	
	cin.get();
	return 0;
}