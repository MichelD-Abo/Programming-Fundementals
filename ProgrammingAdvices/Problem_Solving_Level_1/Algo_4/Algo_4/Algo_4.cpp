#include <iostream>

using namespace std;

void hireDriverProcedure(unsigned short age, bool hasDriverLicence);
void recjectingReasonProcedure(unsigned short age, bool hasDriverLicence);



int main()
{
	unsigned short age;
	bool hasDriver;

	cout << "Welcome to our company!" << endl
		<< "We are in deep need of a personal driver" << endl
		<< "_________________________________________" << endl;
	cout << "Please enter your age: \n";
	cin >> age;
	cout << endl;

	cout << "Do you have a driving licence?\n";
	cin >> hasDriver;
	cout << endl;


	hireDriverProcedure(age, hasDriver);


	return 0;
}

void hireDriverProcedure(unsigned short age, bool hasDriverLicence)
{
	if (age > 21 && hasDriverLicence)
	{
		cout << "You are hired!\n"
			<< "Congrats" << endl;
	}
	else
	{
		cout << "Unfortunatley...\n"
			<< "You are rejected ";
		recjectingReasonProcedure(age, hasDriverLicence);
	}
}

void recjectingReasonProcedure(unsigned short age, bool hasDriverLicence)
{
	if (age < 21 && !hasDriverLicence)
	{
		cout << "Because you do not have a driving licence and you are less than 21.";
	}
	else if (!hasDriverLicence)
	{
		cout << "Because you do not have a driving licence.";
	}
	else
	{
		cout << "Because you are under 21." << endl;
	}
}