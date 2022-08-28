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

int digitFrequency(int number, int freq)
{
	int remainder = 0;
	int i;

	for (i = 0; number > 0; number /= 10)
	{
		remainder = number % 10;
		if (freq == remainder)
			i++;
	}

	return i;
}
int main()
{
	int number = readPositiveNumber("Enter Positive Number: ");
	int freq = readPositiveNumber("Frequency for number: ");

	cout << "Digit " << freq << " Frequency is: " << digitFrequency(number, freq) << " Time.";
}

