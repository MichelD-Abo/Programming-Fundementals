#include <iostream>

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

void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void FillArrayWith1toN(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}

void copyArrayInReverseOrder(int arr1[100], int arr2[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr2[i] = arr1[arrLength - 1 - i ];
	}

}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main()
{

	int arr[100];
	int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");

	FillArrayWith1toN(arr, arrLength);
	cout << "\nArray elements before Reverse:\n";
	PrintArray(arr, arrLength);

	int arr2[100];

	copyArrayInReverseOrder(arr, arr2, arrLength);
	cout << "\nArray elements after Reverse:\n";
	PrintArray(arr2, arrLength);

	return 0;
}
