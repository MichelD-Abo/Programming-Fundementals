#include <iostream>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

void copyArray(int source[100], int destination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		destination[i] = source[i];
	}
}

void sum2Arrays(int arr1[100], int arr2[100], int sum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		sum[i] = arr1[i] + arr2[i];
	}
}

int main()
{

	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], sum[100], arrLength = 0;

	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 Elements: ";
	PrintArray(arr, arrLength);

	FillArrayWithRandomNumbers(arr2, arrLength);

	cout << "\nArray 2 Elements: ";
	PrintArray(arr2, arrLength);


	sum2Arrays(arr, arr2, sum, arrLength);

	cout << "\nSum of 2 Arrays: ";
	PrintArray(sum, arrLength);


	return 0;
}