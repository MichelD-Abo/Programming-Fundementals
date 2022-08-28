#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
	int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number <= 0);

	return number;
}

void printInvertedPattern(int number)
{
	for (int i = number; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}

		cout << endl;
	}
}

int main()
{
	printInvertedPattern(readPositiveNumber("Enter Positive Number: "));

	return 0;
}