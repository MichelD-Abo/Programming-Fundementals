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

int myFloor(float number)
{
	int integerPart = 0;
	float fractionPart = 0.0;

	integerPart = (int)number;
	fractionPart = getFractionPart(number);

	if (fractionPart >= 0.0)
	{
		return (int)number;
	}
	else
	{
		return (int)number - 1;
	}
}

int main()
{
	float number = 0;

	number = readNumber("Enter Number: ");

	cout << "My round: " << myFloor(number) << endl;
	cout << "C++ : " << floor(number) << endl;
	return 0;
}





