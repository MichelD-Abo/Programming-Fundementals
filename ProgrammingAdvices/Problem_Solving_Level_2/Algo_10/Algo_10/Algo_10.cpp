#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool isWantedNumber(short DigitToCheck, int Number)
{
	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			return true;
		}
	}

	return false;
}

void PrintAllDigitsFrequencey(int Number)
{
	cout << endl;

	for (int i = 0; i < 10; i++)
	{		
		if (isWantedNumber(i, Number))
		{
			cout << i
				<< endl;
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please enter the a number?");

	PrintAllDigitsFrequencey(Number);
	return 0;
}


















