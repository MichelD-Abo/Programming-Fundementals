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

int myRound(float number)
{
	float remainder = number - (int)number;

	if (number >= 0)
	{
		if (abs(remainder) >= 0.5)
		{
			return (int)number + 1;
		}
		else if (abs(remainder) <= 0.5)
		{
			return (int)number;
		}
	}
	else
	{
		if (abs(remainder) >= 0.5)
		{
			return (int)number - 1;
		}
		else if (abs(remainder) <= 0.5)
		{
			return (int)number;
		}
	}



}

int main()
{
	float number = 0;

	number = readNumber("Enter Number: ");

	cout << "My round: " << myRound(number) << endl;
	cout << "C++ : " << round(number) << endl;
	return 0;
}

