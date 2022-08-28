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

int minimumNumber(int arr[100], int length)
{
	int min = 0;
	min = arr[0];

	for (int i = 0; i < length; i++)
	{

		if (min > arr[i])
			min = arr[i];
	}

	return min;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], length = 0;

	fillArrayWithRandomNumbers(arr, length);
	printArray(arr, length);

	cout << "Min is: " << minimumNumber(arr, length) << endl;
}

