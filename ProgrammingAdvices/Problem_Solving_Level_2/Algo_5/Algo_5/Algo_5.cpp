#include <iostream>

using namespace std;

int readPositiveNumber(string message)
{
    int number = 0;

	do
	{
		cout << message;
		cin >> number;

	} while (number < 0);

	return number;
}

void reverseDigit(int digit)
{
	for (int i = 0; digit != 0; digit /= 10)
	{
		i = digit % 10;
		cout << i << endl;
	}
}

//void reverseDigit(int digit)
//{
//	int remainder = 0;
//
//	while (digit > 0)
//	{
//		remainder = digit % 10;
//		digit /= 10;
//		cout << remainder << endl;
//
//	}
//}


int main()
{
	reverseDigit(readPositiveNumber("Enter positive number: "));

	return 0;
}




