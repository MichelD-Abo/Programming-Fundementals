#include <iostream>

using namespace std;

float numOfDaystoSecondsFunction(float days)
{
    return days * 24 * pow(60, 2);
}

float numOfHourstoSecondsFunction(float hours)
{
    return hours * pow(60, 2);
}

float numOfMinutestoSecondsFunction(float minutes)
{
    return minutes * 60;
}


int main()
{
    float days, hours, minutes, seconds;

    cout << "Enter days: \n";
    cin >> days;

    cout << "Enter hours: \n";
    cin >> hours;

    cout << "Enter minutes: \n";
    cin >> minutes;

    cout << "Enter seconds: \n";
    cin >> seconds;

    float taskDuration = numOfDaystoSecondsFunction(days) + numOfHourstoSecondsFunction(hours) + numOfMinutestoSecondsFunction(minutes) + seconds;

    cout << "The task duration in seconds is: " << taskDuration << " seconds. Round: " << round(taskDuration) <<  endl;

    return 0;
}