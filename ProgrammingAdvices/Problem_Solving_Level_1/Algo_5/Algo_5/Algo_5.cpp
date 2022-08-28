#include <iostream>

using namespace std;

enum enDriverLicence {Licence = 1, NoLicence = 2};
enum enRefferals { Refferals = 1, NoRefferals = 2 };


void printMenuToUserProcedure();
unsigned short readUserAgeFunction();
enDriverLicence readDriverLicenceFunction();
enRefferals readRefferalsFunction();
void determineIfHiredProcedure(unsigned short age, enDriverLicence drive, enRefferals ref);
void recjectingReasonProcedure(unsigned short age, enDriverLicence drive, enRefferals ref);
bool hasRefferalsFunction(enRefferals ref);
bool validAgeFunction(unsigned short age);
bool hasDriverLicenceFunction(enDriverLicence drive);
void hiredPromptProcedure();

int main()
{
	unsigned short age;
	enDriverLicence drive;
	enRefferals ref;

	printMenuToUserProcedure();

	do
	{
		age = readUserAgeFunction();
	} while (age <= 0);

	do
	{
		drive = readDriverLicenceFunction();
	} while (drive != 1 && drive != 2);

	do
	{
		ref = readRefferalsFunction();
	} while (ref != 1 && ref != 2);


	determineIfHiredProcedure(age, drive, ref);

	return 0;
}

void printMenuToUserProcedure()
{
	cout << "**********************************************\n";
	cout << "               Hire a Driver                  \n";
	cout << "**********************************************\n";
	cout << "Welcome to our company!" << endl;
	cout << "We are in deep need of a personal driver.\n";
	cout << "_________________________________________" << endl;
}

unsigned short readUserAgeFunction()
{
	unsigned short age;

	cout << "Please enter your age: ";
	cin >> age;

	return age;
}

enDriverLicence readDriverLicenceFunction()
{
	int drive;

	cout << "Do you have a driving licence?\n";
	cout << "(1) Yes.\n";
	cout << "(2) No.\n";

	cin >> drive;

	return (enDriverLicence)drive;

}

enRefferals readRefferalsFunction()
{
	int ref;

	cout << "Do you have a refferal?\n";
	cout << "(1) Yes.\n";
	cout << "(2) No.\n";

	cin >> ref;

	return (enRefferals)ref;
}

void determineIfHiredProcedure(unsigned short age, enDriverLicence drive, enRefferals ref)
{
	if (hasRefferalsFunction(ref))
	{
		hiredPromptProcedure();
	}
	else
	{
		recjectingReasonProcedure(age, drive, ref);
	}
}

void recjectingReasonProcedure(unsigned short age, enDriverLicence drive, enRefferals ref)
{
	cout << "Unfortunatley...\n";
	cout << "You are rejected ";

	if (validAgeFunction(age) && hasDriverLicenceFunction(drive) == false && hasRefferalsFunction(ref) == false)
	{
		cout << "Because you do not have a driving licence and a refferal.\n";
	}
	else if (hasDriverLicenceFunction(drive) == false && hasRefferalsFunction(ref) == false)
	{
		cout << "Because you do not have a driving licence and a refferal.\n";
	}
	else if (validAgeFunction(age) == false && hasDriverLicenceFunction(drive) && hasRefferalsFunction(ref) == false)
	{
		cout << "Because you are under 21 and do not have a refferal.\n" << endl;
	}
}

bool hasRefferalsFunction(enRefferals ref)
{
	switch (ref)
	{
	case Refferals:
		return true;
		break;
	case NoRefferals:
		return false;
		break;
	}
}

bool hasDriverLicenceFunction(enDriverLicence drive)
{
	switch (drive)
	{
	case enDriverLicence::Licence:
		return true;
		break;
	case enDriverLicence::NoLicence:
		return false;
		break;
	}
}

void hiredPromptProcedure()
{
	cout << "You are hired!\n";
	cout << "Congrats" << endl;

}

bool validAgeFunction(unsigned short age)
{
	if (age > 21)
	{
		return true;
	}
	else
	{
		return false;
	}
}
