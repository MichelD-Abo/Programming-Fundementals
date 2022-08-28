#include<iostream>

using namespace std;


void AddArrayElements(int number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = number;
}

void FillArrayWithNumbersHardCoded(int arr[100], int& arrLength)
{
	arrLength = 4;
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 2;
	arr[3] = 1;

}

void CopyReverseArray(int arrSource[100], int arrDestination[100], int arrSourceLength, int& arrDestinationLength)
{

	for (int i = 0; i < arrSourceLength; i++)
	{
		AddArrayElements(arrSource[arrSourceLength - 1 - i], arrDestination, arrDestinationLength);
	}
}

bool isPalindrome(int arr[100], int arrReverse[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == arrReverse[i])
			return true;
	}

	return false;
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

	CopyReverseArray(arr1, arr2, arrLength1, arrLength2);

	cout << "\nArray 1 elements:\n";
	PrintArray(arr1, arrLength1);

	cout << "\nArray 2 Copy:\n";
	PrintArray(arr2, arrLength2);

	if (isPalindrome(arr1, arr2, arrLength1))
	{
		cout << "Array is Palindrome. \n";
	}
	else
	{
		cout << "Array is Not Palindrome. \n";
	}
	
	return 0;
}

