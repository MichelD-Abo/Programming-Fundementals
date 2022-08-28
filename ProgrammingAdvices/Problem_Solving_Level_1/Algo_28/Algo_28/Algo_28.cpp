#include <iostream>

using namespace std;

unsigned short sumFrom1ToNforLoopFunction(unsigned short N);
unsigned short sumFrom1ToNwhileLoopFunction(unsigned short N);
bool isOddNumberFunction(unsigned short N);
unsigned short getNFunction();


int main()
{
	unsigned short N = getNFunction();

	cout << "Via For Loop: " << sumFrom1ToNforLoopFunction(N) << endl;
	cout << "Via While Loop: " << sumFrom1ToNwhileLoopFunction(N) << endl;

	return 0;
}

unsigned short sumFrom1ToNforLoopFunction(unsigned short N)
{
	unsigned short sum = 0;

	for (unsigned short i = 1; i <= N; i++)
	{
		if (isOddNumberFunction(i))
		{
			sum += i;
		}
	}
	return sum;
}

unsigned short sumFrom1ToNwhileLoopFunction(unsigned short N)
{
	unsigned short i = 1;
	unsigned short sum = 0;

	while (i <= N)
	{
		if (isOddNumberFunction(i))
		{
			sum += i;
		}

		i++;
	}

	return sum;
}

bool isOddNumberFunction(unsigned short N)
{
	unsigned short remainder = N % 2;
	if (remainder != 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

unsigned short getNFunction()
{
	unsigned short N;

	cout << "Enter number: ";
	cin >> N;

	return N;
}
