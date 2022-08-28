#include<iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int RandomNumber(int From, int To)
{

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void AddArrayElements(int number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = number;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	arrLength = ReadPositiveNumber("\nEnter number of elements: ");

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrSourceLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrSourceLength; i++)
			AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
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

	int arr1[100], arr2[100], arrLength1 = 0, arrLength2 = 0;
	FillArrayWithRandomNumbers(arr1, arrLength1);

	CopyArray(arr1, arr2, arrLength1,arrLength2);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr1, arrLength1);

	cout << "\nArray 2 elements after copy:\n";
	PrintArray(arr2, arrLength2);

	return 0;
}

