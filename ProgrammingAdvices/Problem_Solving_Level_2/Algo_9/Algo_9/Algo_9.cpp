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

int countDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}

void printAllDigitFreq(int number)
{

	for (int i = 0; i < 10; i++)
	{
		int freqCount = 0;

		freqCount = countDigitFrequency(i, number);

		if (freqCount > 0)
		{
			cout << "Digit: " << i << " Frequency is: " << freqCount << " Times." << endl;
		}
	}
}

int main()
{
    int number = readPositiveNumber("Enter Positive Number: ");
	printAllDigitFreq(number);
}



