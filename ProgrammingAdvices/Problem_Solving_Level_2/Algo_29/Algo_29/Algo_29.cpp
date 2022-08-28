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
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

bool isPrime(int number)
{
	int M = round(sqrt(number));

	for (int counter = 2; counter <= M; counter++)
	{
		if (number % counter == 0)
		{
			return false;
		}
	}

	return true;
}

void printOnlyPrimeArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (isPrime(arr[i]))
		{
			cout << arr[i] << " ";
		}
	}
	cout << "\n";
}




int main()
{
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL));
	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray 1 Elements: ";
	PrintArray(arr, arrLength);

	cout << "\nPrime Number Array: ";
	printOnlyPrimeArray(arr, arrLength);


	return 0;
}


