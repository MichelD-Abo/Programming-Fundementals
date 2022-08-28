#include <iostream>

using namespace std;

float secondsInStuffFunction(int seconds, const unsigned secondsPer)
{
	return floor(seconds / secondsPer);
}

int remainderFunction(int remainder, const unsigned secondPer)
{
	return remainder % secondPer;
}



int main()
{
	const unsigned  secondsPerDay = pow(60, 2) * 24;
	const unsigned  secondsPerHour = pow(60, 2);
	const unsigned  secondsPerMinute = 60;

	int seconds;
	int remainder;
	

	cout << "Enter seconds: \n";
	cin >> seconds;
	cout << endl;

	float numberOfDays = secondsInStuffFunction(seconds, secondsPerDay);
	remainder = remainderFunction(seconds,secondsPerDay);

	float numberOfHours = secondsInStuffFunction(remainder,secondsPerHour);
	remainder = remainderFunction(remainder,secondsPerHour);

	float numberOfMinutues = secondsInStuffFunction(remainder,secondsPerMinute);
	remainder = remainderFunction(remainder,secondsPerMinute);

	float numberOfSeconds = remainder;

	cout << numberOfDays << " : " << numberOfHours << " : " << numberOfMinutues << " : " << numberOfSeconds << endl;


	return 0;
}