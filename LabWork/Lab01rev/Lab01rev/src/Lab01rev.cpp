/*
Name:	Calin Doran | Student #: C00220175
Lab #:	Lab01		| Date: 14-09-2018
*/

#include <iostream> //used for cout/cin

using namespace std; //used so I dont need to use std::cout;

void function1(void) //Q1
{
	cout << "Hello World!\n";

	cin.get();
	return;
}

void function2(void) //Q2
{
	int x;

	cout << "Enter number: ";
	cin >> x;
	cout << "Number is: " << x;
	
	cin.get();
	return;
}

void function3(void) //Q3
{
	int x;
	x = 4 + 2;
	cout << x;

	cin.get();
	return;
}

void function4(void) //Q4
{
	int x = 5, y = 10;

	cout << "Before swap";
	cout << "x : " << x << " y : " << y;

	x = x + y;
	y = x - y;
	x = x - y;

	cout << "\nAfter swap";
	cout << "x : " << x << " y : " << y;

	cin.get();
	return;
}

void function5(void) //Q5
{
	int x;

	cout << "Enter numb: ";
	cin >> x;

	if (x % 2 == 0)
		cout << x << " is even.";
	else
		cout << x << " is odd.";

	cin.get();
	return;
}

void function6(void) //Q6
{
	int xUpper, xLower;
	char c;

	cout << "Enter a letter: ";
	cin >> c;

	xLower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	xUpper = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (xLower || xUpper)
		cout << c << " is a vowel.";
	else
		cout << c << " is a consonant.";

	cin.get();
	return;
}

void function7(void) //Q7
{
	int x1, x2, x3;

	cout << "Enter three numbers: ";
	cin >> x1 >> x2 >> x3;

	if (x1 >= x2)
	{
		if (x1 >= x3)
			cout << "Largest number: " << x1;
		else
			cout << "Largest number: " << x3;
	}
	else
	{
		if (x2 >= x3)
			cout << "Largest number: " << x2;
		else
			cout << "Largest number: " << x3;
	}

	cin.get();
	return;
}

void function8(void) //Q8
{
	int year;

	cout << "Enter year: ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				cout << year << " is a leap year.";
			else
				cout << year << " is not a leap year.";
		}
		else
			cout << year << " is a leap year.";
	}
	else
		cout << year << " is not a leap year.";

	cin.get();
	return;
}

void function9(void) //Q9
{
	int x, y;

	cout << "Enter an int: ";
	cin >> x;

	cout << "Enter an int for multi table: ";
	cin >> y;

	for (x = 0; x <= 10; x = ++x)
	{
		cout << x << " * " << y << " = " << x * y << "\n";
	}

	cin.get();
	return;
}

void function10(void) //Q10
{
	int x, rev = 0, remainder;

	cout << "Enter an int: ";
	cin >> x;

	while (x != 0)
	{
		remainder = x % 10;
		rev = rev * 10 + remainder;
		x /= 10;
	}

	cout << "Reversed: " << rev;

	cin.get();
	return;
}

void function11(void) //Q11
{
	char c;

	cout << "Enter a char: ";
	cin >> c;
	cout << "ASCII value of " << c << " is " << int(c);

	cin.get();
	return;
}

void function12(void) //Q12
{
	int x, y;

	cout << "Enter an int: ";
	cin >> x;

	cout << "Enter an int to mutilpy it by: ";
	cin >> y;

	cout << "Value is: " << x * y;

	cin.get();
	return;
}

void function13(void) //Q13
{
	int x, num, digit, rev = 0;

	cout << "Enter a number: ";
	cin >> num;

	x = num;

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;

	} while (num != 0);

	cout << " The reverse of the number is: " << rev;

	if (x == rev)
	{
		cout << " number is a palindrome.";
	}
	else {
		cout << " number is not a palindrome.";
	}

	cin.get();
	return;
}

void function14(void) //Q14
{
	int x, y;
	bool primeNum = true;

	cout << "Enter an int: ";
	cin >> x;

	for (y = 2; y <= x / 2; ++y)
	{
		if (x % y == 0)
		{
			primeNum = false;
			break;
		}
	}

	if (primeNum)
	{
		cout << x << " is a prime number";
	}
	else {
		cout << x << " is not a prime number";
	}

	cin.get();
	return;
}

void function15(void) //Q15 //Need to find out more about conversion..
{
	long long x = 0;
	int y, i = 1;

	cout << "Enter the number to convert: ";
	cin >> y;

	for (i = 0; y > 0; i++)
	{
		x = y % 2;
		y = y / 2;
	}

	cout << "Binary is: ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << x;
	}

	cin.get();
	return;
}

void function16(void) //Q16
{
	char x;
	int intVal;

	cout << "Enter char (0-9): ";
	cin >> x;

	intVal = (int)x;
	cout << "Int value is: " << intVal - 48;

	cin.get();
	return;
}

int main()
{
	int x;

	do
	{
		cout << "\n";
		cout << "Enter a question you would like to see 1-16: \n";
		cout << "Enter 0 to exit..\n";
		cin >> x;

		switch (x)
		{
		case 1:
		{
			cout << "Question 1 selected\n";
			cout << "Program to display 'Hello, World!'\n";
			system("pause");
			function1();
			break;
		}
		case 2:
		{
			cout << "Question 2 selected\n";
			cout << "Program to Print Number Entered by User\n";
			system("pause");
			function2();
			break;
		}
		case 3:
		{
			cout << "Question 3 selected\n";
			cout << "Program to Add Two Numbers\n";
			system("pause");
			function3();
			break;
		}
		case 4:
		{
			cout << "Question 4 selected\n";
			cout << "Program to Swap Two Numbers\n";
			system("pause");
			function4();
			break;
		}
		case 5:
		{
			cout << "Question 5 selected\n";
			cout << "Program to Check Whether Number is Even or Odd\n";
			system("pause");
			function5();
			break;
		}
		case 6:
		{
			cout << "Question 6 selected\n";
			cout << "Program to Check Whether a character is Vowel or Consonant\n";
			system("pause");
			function6();
			break;
		}
		case 7:
		{
			cout << "Question 7 selected\n";
			cout << "Program to Find Largest Number Among Three Numbers\n";
			system("pause");
			function7();
			break;
		}
		case 8:
		{
			cout << "Question 8 selected\n";
			cout << "Program to Check Leap Year\n";
			system("pause");
			function8();
			break;
		}
		case 9:
		{
			cout << "Question 9 selected\n";
			cout << "Program to Generate Multiplication Table\n";
			system("pause");
			function9();
			break;
		}
		case 10:
		{
			cout << "Question 10 selected\n";
			cout << "Program to Reverse a Number. Number is an int\n";
			system("pause");
			function10();
			break;
		}
		case 11:
		{
			cout << "Question 11 selected\n";
			cout << "Program to Find ASCII Value of a Character\n";
			system("pause");
			function11();
			break;
		}
		case 12:
		{
			cout << "Question 12 selected\n";
			cout << "Program to Multiply two Numbers\n";
			system("pause");
			function12();
			break;
		}
		case 13:
		{
			cout << "Question 13 selected\n";
			cout << "Program to Check Whether a Number is Palindrome or Not\n";
			system("pause");
			function13();
			break;
		}
		case 14:
		{
			cout << "Question 14 selected\n";
			cout << "Program to Check Whether a Number is Prime or Not\n";
			system("pause");
			function14();
			break;
		}
		case 15:
		{
			cout << "Question 15 selected\n";
			cout << "Program to Convert Binary Number to Decimal and vice-versa\n";
			system("pause");
			function15();
			break;
		}
		case 16:
		{
			cout << "Question 16 selected\n";
			cout << "Program to convert chars 0-9 input from the keyboard into an integer number\n";
			system("pause");
			function16();
			break;
		}
		case 0:
		{
			cout << "Exiting..\n";
			exit(0);
		}
		default:
		{
			cout << "Invalid, choose another..\n";
		}
		}
	} while (x != 0);
	
	cin.get();
	return 0;
}