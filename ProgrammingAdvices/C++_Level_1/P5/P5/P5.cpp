#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	unsigned short age;
	string city;
	string country;
	float monthlysalary;
	string currency;
	unsigned char gender;
	bool ismarried;


	cout << "enter your name: " << endl;
	getline(cin, name);

	cout << "enter your age: " << endl;
	cin >> age;

	cout << "enter your city: " << endl;
	cin >> city;

	cout << "enter your country: " << endl;
	cin >> country;

	cout << "enter your monthly salary: " << endl;
	cin >> monthlysalary;

	cout << "enter your currency: " << endl;
	cin >> currency;

	cout << "enter your gender (m\\f): " << endl;
	cin >> gender;

	cout << "are you married (true\\false): " << endl;
	cin >> ismarried;


	cout << "\n************************************\n"
		<< "name: " << name << endl
		<< "age: " << age << " years\n"
		<< "city: " << city << endl
		<< "country: " << country << endl
		<< "monthly salary: " << monthlysalary << " " << currency << endl
		<< "yearly salary: " << monthlysalary * 12 << " " << currency << endl
		<< "gender: " << gender << endl
		<< "married: " << ismarried << endl
		<< "************************************\n";


	short num1;
	short num2;
	short num3;


	cout << "enter first number: " << endl;
	cin >> num1;
	cout << endl;

	cout << "enter second number: " << endl;
	cin >> num2;
	cout << endl;

	cout << "enter third number: " << endl;
	cin >> num3;
	cout << endl;

	cout << num1 << " +\n"
		<< num2 << " +\n"
		<< num3 << endl
		<< "___________________________________________________\n"
		<< "total: " << num1 + num2 + num3 << endl;

		
	unsigned short myAge;
	short yearsToChange;

	cout << "Enter your age: " << endl;
	cin >> myAge;
	cout << endl;

	cout << "Enters years to change" << endl;
	cin >> yearsToChange;
	cout << endl;

	cout << "After " << yearsToChange << " years, you will be " << myAge + yearsToChange << " years old\n";

	return 0;


}