#include<iostream>

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

int randomNumber(int from, int to)
{
	int randNum = rand() % (to - from + 1) + from;

	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = randomNumber(-100, 100);
	}
}

int countPositiveNumbers(int arr[100], int arrLength)
{
	int counter = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > 0)
			counter++;
	}

	return counter;
}

void PrintArray(int arr[100], int arrLength)
{
	cout << "\nArray Length: " << arrLength;

	cout << "\nArray elements: ";

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\n";
}


int main()
{
	//Seeds the random number generator in C++, called only once   
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0;

	arrLength = readPositiveNumber("Enter Number: ");

	FillArrayWithRandomNumbers(arr, arrLength);


	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	cout << "Even Numbers count is: " << countPositiveNumbers(arr, arrLength) << endl;
	return 0;
}

