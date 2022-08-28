#include <iostream>
#include "myLib.h"

using namespace std;

enum enNumberSign {Zero = 1, Positive = 2, Negative = 3};

string getSignNames(int signNumber)
{
	string signList[3] = { "Zero", "Positive", "Negative" };
	return signList[signNumber - 1];
}

enNumberSign checkPostiveOrNegative(int number)
{
	return (number >= 0) ? Positive : Negative;
}

enNumberSign checkPostiveNegativeOrZero(int number)
{
	return (number == 0) ? Zero : (number >= 0) ? Positive : Negative;
}

int main()
{
	cout << getSignNames(checkPostiveNegativeOrZero(myLib::readInteger())) << endl;

	return 0;
}

