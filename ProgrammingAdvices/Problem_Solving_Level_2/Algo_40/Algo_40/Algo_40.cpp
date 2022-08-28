#include<iostream>

using namespace std;


void AddArrayElements(int number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = number;
}

void FillArrayWithNumbersHardCoded(int arr[100], int &arrLength)
{
	arrLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 20;
	arr[3] = 20;
	arr[4] = 30;
	arr[5] = 10;
	arr[6] = 10;
	arr[7] = 20;
	arr[8] = 20;
	arr[9] = 30;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i;// return the index 
	}
	//if you reached here, this means the number is not found
	return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void CopyDistinctArrayNumbers(int arrSource[100], int arrDestination[100], int arrSourceLength, int& arrDestinationLength)
{

	for (int i = 0; i < arrSourceLength; i++)
	{
		if (IsNumberInArray(arrSource[i], arrDestination, arrDestinationLength) != 1 )
		{
			AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
		}
	}
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
	FillArrayWithNumbersHardCoded(arr1, arrLength1);

	CopyDistinctArrayNumbers(arr1, arr2, arrLength1, arrLength2);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr1, arrLength1);

	cout << "\nArray 2 Copy:\n";
	PrintArray(arr2, arrLength2);

	return 0;
}



