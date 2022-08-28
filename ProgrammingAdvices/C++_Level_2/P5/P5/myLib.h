#pragma once
#include <iostream>

using namespace std;

namespace myLib
{
	string readString(string message)
	{
		string txt = "";

		cout << message;
		cin >> txt;

		return txt;
	}

	float readSalary()
	{
		float salary = 0.0;

		cout << "Enter Salary: ";
		cin >> salary;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "Invalid, Enter Salary: ";
			cin >> salary;
		}

		return salary;
	}
}