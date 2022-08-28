#include<iostream>
#include<string>

using namespace std;

int ReadPositiveNumber(string Message)
{ 
	int Number = 0;
	do
	{
		cout <<     Message << endl;
		cin  >>     Number; 
	}     while (Number <= 0);

	return Number;
} 

int sumOfAllDivisors(int number)
{
	int sum = 0;

	for (int div = 1; div < number; div++)
	{
		if (number % div == 0)
			sum += div;
	}

	return sum;
}

bool isPerfectNumber(int number)
{
	if (number == sumOfAllDivisors(number) )
		return true;
	else
		return false;
}

void PrintPerfectOrNotPerfectNumbers(int number)
{    	
	if (isPerfectNumber(number))
		cout << "Is perfect";
	else
		cout << "Is not perfect";
} 

int main()
{ 
	PrintPerfectOrNotPerfectNumbers(ReadPositiveNumber("Please enter a positive number ? "));
	return 0;
}



