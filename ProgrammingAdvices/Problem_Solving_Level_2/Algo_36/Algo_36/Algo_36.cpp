#include<iostream>

using namespace std;

enum enYesOrNo
{
	No = 0,
	Yes = 1
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void FillArrayWithNumbersSemiDynamic(int arr[100], int &arrLength)
{
	int number = 0, qs = 0;
	do
	{
		number = ReadPositiveNumber("\nEnter number: ");
		arr[arrLength] = number;

		qs = ReadPositiveNumber("Do You want More Numbers: [0]:No, [1]Yes\n");
	
		arrLength++;

	} while ((enYesOrNo)qs == enYesOrNo::Yes);
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
	int arr[100], arrLength = 0;

	FillArrayWithNumbersSemiDynamic(arr, arrLength);
	PrintArray(arr, arrLength);

	return 0;
}