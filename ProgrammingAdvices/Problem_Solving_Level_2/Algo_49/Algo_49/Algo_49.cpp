#include<iostream>
#include <cmath>

using namespace std;

float readNumber(string message)
{
	float number = 0;

	cout << message;
	cin >> number;

	return number;
}

float getFractionPart(float number)
{
	return number - (int)number;
}

int myCeil(float number)
{
	int integerPart = 0;
	float fractionPart = 0.0;

	integerPart = (int)number;
	fractionPart = getFractionPart(number);

	if (fractionPart >= 0.0)
	{
		return ++integerPart;
	}
	else
	{
		return integerPart;
	}
}

int main()
{
	float number = 0;

	number = readNumber("Enter Number: ");

	cout << "My ceil: " << myCeil(number) << endl;
	cout << "C++ : " << ceil(number) << endl;
	return 0;
}
