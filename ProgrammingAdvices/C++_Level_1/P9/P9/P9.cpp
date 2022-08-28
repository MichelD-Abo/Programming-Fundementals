#include <iostream>
#include <string>
using namespace std;

struct address
{
	string street;
	string city;
	string country;
};

struct contactInfo
{
	string phoneNumber;
	string email;

};

struct salaries
{
	unsigned int monthlySalary;

};

struct User
{
	string fullName;
	unsigned short age;
	address address;
	contactInfo contact;
	salaries salarie;
	char gender;
	bool isMarried;

};

int main()
{
	User user1;

	cout << "Enter your fullName : \n";
	getline(cin, user1.fullName);
	cout << endl;

	cout << "Enter your age : \n";
	cin >> user1.age;
	cout << endl;

	cout << "Enter your street: \n";
	cin >> user1.address.street;
	cout << endl;

	cout << "Enter your city : \n";
	cin >> user1.address.city;
	cout << endl;

	cout << "Enter your country: \n";
	cin >> user1.address.country;
	cout << endl;

	cout << "Enter your monthlySalary : \n";
	cin >> user1.salarie.monthlySalary;
	cout << endl;

	cout << "Enter your gender (M\\F): \n";
	cin >> user1.gender;
	cout << endl;

	cout << "Are you married (Y\\N) : \n";
	cin >> user1.isMarried;
	cout << endl;

	cout << "Enter your phoneNumber : \n";
	cin >> user1.contact.phoneNumber;
	cout << endl;

	cout << "Enter your email: \n";
	cin >> user1.contact.email;
	cout << endl;

	cout << "*************************************\n\n"
		<< "fullName: " << user1.fullName << endl
		<< "age: " << user1.age << endl
		<< "street: " << user1.address.street << endl
		<< "city: " << user1.address.city << endl
		<< "country: " << user1.address.country << endl
		<< "monthlySalary: " << user1.salarie.monthlySalary << endl
		<< "yearlySalary: " << user1.salarie.monthlySalary * 12 << endl
		<< "gender: " << user1.gender << endl
		<< "isMarried: " << user1.isMarried << endl
		<< "phoneNumber: " << user1.contact.phoneNumber << endl
		<< "email: " << user1.contact.email << endl
		<< "*************************************\n\n";
}


