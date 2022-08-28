#include <iostream>

using namespace std;

int readPostiveNumber(string message)
{
    int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

bool isPerfect(int number)
{
	int sum = 0;

	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum += i;
	}

	return number == sum;
}

void printPerfectFrom1ToN(int number)
{
	for (int i = 1; i <= number; i++)
	{
		if (isPerfect(i))
			cout << i << endl;

	}
}

int main()
{
	printPerfectFrom1ToN(readPostiveNumber("Enter positive number: "));
	return 0;
}
