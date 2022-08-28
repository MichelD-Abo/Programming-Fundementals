#include<iostream>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;

	do {
		cout << Message;
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

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	cout << "\nArray elements: ";

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n\n";
}


int getIndexOfSearchedNumber(int number, int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (number == arr[i])
		{
			return i;
		}
	}
	return -1;
}

bool isFoundNumberInArray(int number, int arr[100], int arrLength)
{
	if (getIndexOfSearchedNumber(number, arr, arrLength) == -1)
		return false;
	else
		return true;
}

int main()
{
	//Seeds the random number generator in C++, called only once  
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0, elementIndex = 0;


	arrLength = ReadPositiveNumber("How many numbers do you want to generate?\n");
	FillArrayWithRandomNumbers(arr, arrLength);
	PrintArray(arr, arrLength);

	int numberToSearch = 0;

	numberToSearch = ReadPositiveNumber("Enter a Number to Search for: ");
	cout << "\nNumber We are looking for is: " << numberToSearch << endl;

	if (isFoundNumberInArray(numberToSearch,arr, arrLength))
		cout << "Number is Found in Array :)"<< endl;
	else
		cout << "The Number is Not Found :(" << endl;



	return 0;
}

 


