#include <iostream>

using namespace std;

int readPostiveNumbers(string message)
{
	int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

int randomNumberInRang(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

void fillArrayWithRandomNumbers(int arr[100], int& length)
{
	length = readPostiveNumbers("Enter Number Of Array Elements: ");

	for (int i = 0; i < length; i++)
	{
		arr[i] = randomNumberInRang(1, 100);
	}
}

void printArray(int arr[100], int length)
{
	cout << "Array: ";

	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

int sumNumbersInArray(int arr[100], int length)
{
	int sum = 0;

	for (int i = 0; i < length; i++)
	{
		sum += arr[i];
	}

	return sum;
}

float averageOfNumbersInArray(int arr[100], int length)
{
	return (float)sumNumbersInArray(arr, length) / length;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], length = 0;

	fillArrayWithRandomNumbers(arr, length);
	printArray(arr, length);

	cout << "Average is: " << averageOfNumbersInArray(arr, length) << endl;
}



