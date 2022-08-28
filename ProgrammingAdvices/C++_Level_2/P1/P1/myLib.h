#pragma once
#include <iostream>

using namespace std;

namespace myLib
{
	int readInteger()
	{
		int number = 0;

		cout << "Enter Number: ";
		cin >> number;

		return number;
	}
}