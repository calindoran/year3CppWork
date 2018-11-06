/*
Name:	Calin Doran | Student #: C00220175
Lab #:	Lab02		| Date: 14-09-2018
Notes.cpp : This file contains the 'main' function. Program execution begins and ends there.
*/

#include <iostream> //used for cout/cin
#include <vector>	//used for vectors
#include <string>	//used for strings
#include <fstream>	//used for file IO

using namespace std; //used so I dont need to use std::cout;

int numLogic() //var and number logic
{
	cout << "Hello World!" << endl;

	const double PI = 3.145926535;
	char myGrade = 'A';
	bool isHappy = true;
	int myAge = 26;
	float favNum = 3.1459;
	double otherfavNum = 1.61459;
	int largestInt = 2147483647; //if last int is set to one higher so *8, it will give minus number

	cout << "Largest int " << largestInt << endl;
	cout << "Fav num " << favNum << endl;
	cout << "Size of int " << sizeof(myAge) << endl;
	cout << "Size of char " << sizeof(myGrade) << endl;
	cout << "Size of bool " << sizeof(isHappy) << endl;
	cout << "Size of float " << sizeof(favNum) << endl;
	cout << "Size of double " << sizeof(otherfavNum) << endl;

	//Other types include
	//short int: At least 16bit
	//long int: At least 32bit
	//long long int: 64bit
	//unsigned int: Same size as signed version
	//long double: Not less then double
	
	//With maths you can use +, -, *, /, % = gives remainder of a division, ++, --.

	cout << "5 + 2 = " << 5 + 2 << endl;
	cout << "5 - 2 = " << 5 - 2 << endl;
	cout << "5 * 2 = " << 5 * 2 << endl;
	cout << "5 / 2 = " << 5 / 2 << endl;
	cout << "5 % 2 = " << 5 % 2 << endl;

	int five = 5;
	cout << "5++ = " << five++ << endl;
	cout << "++5 = " << ++five << endl;
	cout << "5-- = " << five-- << endl;
	cout << "--5 = " << --five << endl;

	//inc from the right side, it will preform the "++" action after it gets the current val of five
	//and vice versa with "--".

	five += 5; //this is like having five = five + 5;

	//Order of operation states * and / is performed before + and -

	cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl;
	cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl;

	cout << "4 / 5 = " << 4 / 5 << endl;
	cout << "4 / 5 = " << (float)4 / 5 << endl; //use this to cast to a float or any var type (int,char).

	//cin.get();		//can be used to keep window open
	system("pause");	//can be used to keep window open with "press any key to continue"
	return 0;
}

int ifLogic() //if statement logic
{
	// The IF statements.
	// ==, !=, >, <, >=, <=. Comparses operations.
	// &&, ||, !. Logical operators.

	int age = 70;
	int ageAtLastExam = 16;
	bool isNotIntoxicated = true;

	if ((age >= 1) && (age < 16)) {
		cout << "You cant drive" << endl;
	}
	else if (!isNotIntoxicated) {
		cout << "You cant drive" << endl;
	}
	else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
		cout << "You cant drive" << endl;
	}
	else {
		cout << "You can drive!" << endl;
	}

	cin.get();
	return 0;
}

int switchLogic() //switch statments
{
	int greetingOption = 2;

	switch (greetingOption)
	{
	case 1:
		cout << "bonjor" << endl;
		break;

	case 2:
		cout << "Hola" << endl;
		break;

	case 3:
		cout << "Hallo" << endl;
		break;

	case 4:
		cout << "Hello" << endl;
		break;

	default:
		cout << "Ayy.." << endl;
		break;
	}

	cin.get();
	return 0;
}

int conditionLogic() //a conditional statment used below, ternary operator
{
	//variable = (condition) ? true : false

	int largestNum = (5 > 2) ? 5 : 2;

	cout << "Largest num: " << largestNum << endl;

	cin.get();
	return 0;
}

int arrayAndForLogic() //arrays && forloops
{
	int myFavNum[5];
	int badNums[5] = { 4,13,14,24,34 };

	cout << "Bad number 1: " << badNums[0] << endl;

	//chars always use '' quotes strings always use ""

	char myName[5][5] = { {'C','a','l','i','n'},{'D','o','r','a','n'} };

	cout << "2nd letter in 2nd arry " << myName[1][1] << endl;

	myName[0][2] = 'e';

	cout << "New value " << myName[0][2] << endl;

	for (int i = 0; i <= 10; i++)
	{
		cout << i << endl;
	}

	for (int j = 0; j < 5; j++)
	{
		for (int k = 0; k < 5; k++)
		{
			cout << myName[j][k];
		}

		cout << endl;
	}

	cin.get();
	return 0;

	/*int main() //start of main function
	{

		int values[20]; // Declares array and how many elements
		int small, big; // Declares integer
		big = small = values[0]; // Assigns element to be highest or lowest value

		for (int i = 0; i < 20; i++) // Counts to 20 and prompts the user for a value and stores it
		{
			cout << "Enter value " << i << ": ";
			cin >> values[i];
		}

		for (int i = 0; i < 20; i++) // Works out the biggest number
		{
			if (values[i] > big) // Compare biggest value with current element
			{
				big = values[i];
			}
		}

		for (int i = 0; i < 20; i++) // Works out the smallest number
		{
			if (values[i] < small) // Compares smallest value with current element
			{
				small = values[i];
			}
		}

		cout << "The biggest number is " << big << endl; // Prints outs the biggest number
		cout << "The smallest number is " << small << endl; // Prints out the smallest number

		system("pause");
		return 0;
	}*/
}

int whileLogic() //while loops, used for when you dont know ahead of time when the loop should end
{
	int randNum = (rand() % 100) + 1;

	while (randNum !=100)
	{
		cout << randNum << ", ";

		randNum = (rand() % 100) + 1;
	}

	int index = 1;

	while (index <= 10)
	{
		cout << index << endl;

		index++;
	}

	string numberGuessed;
	int intNumberGuessed = 0;

	do {

		cout << "Guess between 1 and 10: ";

		getline(cin, numberGuessed);

		intNumberGuessed = stoi(numberGuessed); //convertes string to intager
												//stod(): Converts from string to double
		cout << intNumberGuessed << endl;

	} while (intNumberGuessed != 4);

	cout << "You win" << endl;

	cin.get();
	return 0;
}

int deeperStrings() //how to convert and combine strings
{
	char happyArray[6] = { 'H','a','p','p','y','\0' };

	string birthdayString = " Birthday";

	cout << happyArray + birthdayString << endl;

	string yourName;
	cout << "What is your name ";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	double eulersConstant = .57721;
	string eulerGuess;
	double eulerGuessDouble;

	cout << "What is eulers constant? ";
	getline(cin, eulerGuess);

	eulerGuessDouble = stod(eulerGuess);

	if (eulerGuessDouble == eulersConstant)
	{
		cout << "you are right" << endl;
	}
	else {
		cout << "your wrong" << endl;
	}

	cout << "size of string " << eulerGuess.size() << endl;
	cout << "is string empty " << eulerGuess.empty() << endl;
	cout << eulerGuess.append("was your guess ") << endl;

	cin.get();
	return 0;
} //got to 25:12 in C++ Programming Derek Banas
