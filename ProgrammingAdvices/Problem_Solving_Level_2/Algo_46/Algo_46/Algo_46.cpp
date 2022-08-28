#include<iostream>

using namespace std;

int readNumber(string message)
{
	int number = 0;

	cout << message;
	cin >> number;

	return number;
}

int myAbs(int number)
{
	if (number >= 0)
		return number;
	else
		return -number;
}

int main()
{
	int number = 0;

	number = readNumber("Enter Number: ");

	cout << "My ABS: " << myAbs(number) << endl;
	cout << "C++ : " << abs(number) << endl;
	return 0;
}

