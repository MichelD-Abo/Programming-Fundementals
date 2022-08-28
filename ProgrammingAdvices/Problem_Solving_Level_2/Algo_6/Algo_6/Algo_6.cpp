#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
    int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

int sumOfDigit(int number)
{
	int remainder = 0, sum = 0;

	while (number > 0)
	{
		remainder = number % 10;
		number /= 10;
		sum += remainder;
	}

	return sum;
}

void printSumOfDigit(int sum)
{
	cout << "The sum is: " << sum << endl; 
}

int main()
{
	printSumOfDigit(sumOfDigit(readPositiveNumber("Enter positive number: ")));

	return 0;
}