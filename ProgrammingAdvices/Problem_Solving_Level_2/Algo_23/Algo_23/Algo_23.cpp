#include<iostream>
#include<string>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

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

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return RandomNumber(1, 100);
		break;
	}
	}
}

void ReadArray(int arr[100], int& arrLength)
{
	arrLength = ReadPositiveNumber("Enter number of elements : ");

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GetRandomCharacter(enCharType::Digit);
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

int main()
{
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	ReadArray(arr, arrLength);

	cout << "Array: ";
	PrintArray(arr, arrLength);

	return 0;
}