#include <iostream>
#include <cstdlib>

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
	int temp = A;
	A = B;
	B = temp;
}

int RandomNumber(int From, int To)
{
	//Function to generate a random number

	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

void FillArrayNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1 ;
	}
}

void shuffleArray(int arr[100], int arrLength)
{
	for (int j = 0; j < arrLength; j++)
	{

		Swap(arr[RandomNumber(1,arrLength) - 1] , arr[RandomNumber(1, arrLength) - 1]);

	}
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
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0;
		
	arrLength = ReadPositiveNumber("How many elements ?\n");


	FillArrayNumbers(arr, arrLength);
	cout << "\nArray elements from 1 to " << arrLength << ": ";
	PrintArray(arr, arrLength);


	shuffleArray(arr, arrLength);
	cout << "\nShuffled Array elements from 1 to " << arrLength << ": ";
	PrintArray(arr, arrLength);


	return 0;
}





