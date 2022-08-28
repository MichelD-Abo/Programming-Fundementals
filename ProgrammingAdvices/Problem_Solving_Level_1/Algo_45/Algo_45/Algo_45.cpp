#include <iostream>
#include <string>

using namespace std;

enum enYearMonths
{
	Jan = 1,
	Feb = 2,
	Mar = 3,
	Aprl = 4,
	May = 5,
	Jun = 6,
	Jul = 7,
	Aug = 8,
	Sep = 9,
	Oct = 10,
	Nov = 11,
	Dec = 12
};

void ShowYearMonthsMenuProcedure()
{
	cout << "************************" << endl;
	cout << "       Year Months        " << endl;
	cout << "************************" << endl;
	cout << "1: Januanry" << endl;
	cout << "2: Februari" << endl;
	cout << "3: Mars" << endl;
	cout << "4: April" << endl;
	cout << "5: May" << endl;
	cout << "6: June" << endl;
	cout << "7: July" << endl;
	cout << "8: August" << endl;
	cout << "9: September" << endl;
	cout << "10: October" << endl;
	cout << "11: November" << endl;
	cout << "12: December" << endl;
	cout << "************************" << endl;
	cout << "Please enter the number of day?" << endl;
}

enYearMonths readYearMonthsFunction()
{
	int ym;

	cin >> ym;
	return (enYearMonths)ym;
}

string determineMOnthByMonthNumberFunction(enYearMonths yearMonth)
{
	switch (yearMonth)
	{
	case enYearMonths::Jan:
		return "January";
		break;
	case enYearMonths::Feb:
		return "February";
		break;
	case enYearMonths::Mar:
		return "Mars";
		break;
	case enYearMonths::Aprl:
		return "April";
		break;
	case enYearMonths::May:
		return "May";
		break;
	case enYearMonths::Jun:
		return "June";
		break;
	case enYearMonths::Jul:
		return "July";
		break;
	case enYearMonths::Aug:
		return "August";
		break;
	case enYearMonths::Sep:
		return "September";
		break;
	case enYearMonths::Oct:
		return "October";
		break;
	case enYearMonths::Nov:
		return "November";
		break;
	case enYearMonths::Dec:
		return "December";
		break;
	default:
		return "Not a month :)";
		break;
	}

}

int main()
{
	ShowYearMonthsMenuProcedure();

	cout << "This month is: " << determineMOnthByMonthNumberFunction(readYearMonthsFunction()) << endl;

	return 0;
}

