#include <iostream>
using namespace std;


int main()
{
	string name = "Michel";
	unsigned short age = 20;
	string city = "STHLM";
	string country = "Sweden";
	float mothlySalary = 10000;
	string currency = "SEK";
	unsigned char gender = 'M';
	bool isMarried = false;

	unsigned short x = 20, y = 30, z = 10, sum = x + y + z;
	unsigned char operation = '+';

	unsigned short ageChanger = 5;

	cout << "*************************************\n" 
		<< "Name: " << name << endl
		<< "Age: " << age << endl
		<< "City: " << city << endl
		<< "Country: " << country << endl
		<< "Monthly salary: " << mothlySalary << " " << currency << endl
		<< "Yearly salary: " << mothlySalary * 12 << " " << currency << endl
		<< "Gender: " << gender << endl
		<< "Married: " << isMarried << endl
		<< "*************************************\n\n";

	cout << x << " " << operation << endl
		<< y << " " << operation << endl
		<< z << endl
		<< "_________________________________\n"
		<< "Total = " << sum << endl << endl;

	cout << "After " << ageChanger << " years " << " you will be " << age + ageChanger << " years old\n\n";

	return 0;
}