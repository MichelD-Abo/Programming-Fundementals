#include <iostream>
#include <string>

using namespace std;

enum enWeekDays
{
	Sun = 1,
	Mon = 2,
	Tues = 3,
	Wed = 4,
	Thurs = 5,
	Fri = 6,
	Satur = 7
};

void ShowWeekDayMenuProcedure()
{
	cout << "************************" << endl;
	cout << "       Week Days        " << endl;
	cout << "************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "7: Saturday" << endl;
	cout << "************************" << endl;
	cout << "Please enter the number of day?" << endl;
}

enWeekDays readWeekDaysFunction()
{
	int wd;

	cin >> wd;
	return (enWeekDays)wd;
}

string determineDayByDayNumberFunction(enWeekDays weekDay)
{
	switch (weekDay)
	{
	case enWeekDays::Sun:
		return "Sunday";
		break;
	case enWeekDays::Mon:
		return "Monday";
		break;
	case enWeekDays::Tues:
		return "Tuesday";
		break;
	case enWeekDays::Wed:
		return "Wednesday";
		break;
	case enWeekDays::Thurs:
		return "Thursday";
		break;
	case enWeekDays::Fri:
		return "Friday";
		break;
	case enWeekDays::Satur:
		return "Saturday";
		break;
	default:
		return "Not a day :)";
		break;
	}

}

int main()
{
	ShowWeekDayMenuProcedure();

	cout << "It is: " << determineDayByDayNumberFunction(readWeekDaysFunction()) << endl;

   return 0;
}

