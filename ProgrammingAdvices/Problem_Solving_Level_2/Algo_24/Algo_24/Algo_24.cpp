#include<iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

int RandomNumber(int From, int To)
{
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void ReadArray(int arr[100], int& arrLength)
{
	arrLength = ReadPositiveNumber("Enter number of elements : ");

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int findMax(int arr[100], int arrLength)
{
	int max = 0;

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}

int main()
{
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	ReadArray(arr, arrLength);

	cout << "Array: ";
	PrintArray(arr, arrLength);
	cout << endl;

	cout << "Max Number is: " << findMax(arr, arrLength);
	cout << endl;

	return 0;
}



