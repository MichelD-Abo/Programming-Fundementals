#pragma once

#include <iostream>

using namespace std;

namespace myLib
{
	int readNumber()
	{
		int number = 0;

		cout << "Enter Number: ";
		cin >> number;

		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid, Enter Again: ";
			cin >> number;
		}

		return number;

	}
}
