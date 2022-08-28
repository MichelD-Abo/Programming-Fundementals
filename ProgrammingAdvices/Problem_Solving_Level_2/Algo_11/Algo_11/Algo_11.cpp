#include <iostream>
#include <string>

using namespace std;

int readNumber(string message)
{
	int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

int reverseNumber(int number)
{
	int number2 = 0,
		remainder = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;

		number2 = number2 * 10 + remainder;
	}

	return number2;
}

bool isPalindrome(int reversedNumber, int Number)
{
	return reversedNumber == Number;
}

void printPalindrome(int reversedNumber, int Number)
{
	if (isPalindrome(reversedNumber, Number))
		cout << Number << " is Palindrome." << endl;
	else 
		cout << Number << " is Not Palindrome." << endl;

}


int main()
{
	int Number = readNumber("Enter Number: ");
	int Reversed = reverseNumber(Number);

	printPalindrome(Reversed, Number);

	return 0;
}



