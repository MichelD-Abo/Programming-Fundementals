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

enum Gender
{
	Male,
	Female
};

enum Status
{
	Single,
	Married

};

struct User
{
	string fullName;
	unsigned short age;
	address address;
	contactInfo contact;
	salaries salarie;
};


int main()
{
	User user1;
	Gender gender;
	Status status;

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

	gender = Gender::Male;

	status = Status::Single;

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
		<< "gender: " << gender << endl
		<< "isMarried: " << status << endl
		<< "phoneNumber: " << user1.contact.phoneNumber << endl
		<< "email: " << user1.contact.email << endl
		<< "*************************************\n\n";
}


