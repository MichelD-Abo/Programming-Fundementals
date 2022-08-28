#include <iostream>
#include <string>

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

void readNumbersInArray(int array[100], int& length)
{
	length = readPositiveNumber("How many array elements: ");

	for (int i = 0; i <= length - 1; i++)
	{
		array[i] = readPositiveNumber("Element [" + to_string(i + 1) + "]: ");
	}
}

void printNumbersOfTheArray(int array[100], int length)
{
	cout << "Original Array: ";

	for (int i = 0; i <= length - 1; i++)
	{
		cout << array[i] << " ";
	}

	cout << endl;
}

int wantedNumberFrequency(int wantedNumber, int array[100], int length)
{
	int counter = 0;

	for (int i = 0; i <= length - 1; i++)
	{
		if (array[i] == wantedNumber)
			counter++;
	}

	return counter;
}


int main()
{
	int arrayOfNumbers[100], length = 0, wantedNumber = 0 ;
	

	readNumbersInArray(arrayOfNumbers, length);

	wantedNumber = readPositiveNumber("Enter number that you want to check: ");

	printNumbersOfTheArray(arrayOfNumbers, length);

	cout << endl << wantedNumber << " Is Repeated " << wantedNumberFrequency(wantedNumber, arrayOfNumbers, length) << " Time(s)." << endl;

	return 0;
}





