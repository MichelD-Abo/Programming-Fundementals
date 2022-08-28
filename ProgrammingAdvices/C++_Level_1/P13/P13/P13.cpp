#include <iostream>

using namespace std;

void printMyCardInfo()
{
	cout << "*****\n";
	cout << "Name: Michel.\n";
	cout << "Age: 20.\n";
	cout << "City: STHLM.\n";
	cout << "Country: Sweden.\n";
	cout << "*****" << endl << endl << endl;
}

void printBlock()
{
	cout << "*****\n";
	cout << "*****\n";
	cout << "*****\n";
	cout << "*****\n\n\n";
}

void printIloveProgrammming()
{
	cout << "I love programming!\n\n";
	cout << "I promise to be the best dev ever!\n";
	cout << "I know it will take some time to practice, but I will achieve my goal\n\n";
	cout << "Best Regards\n";
	cout << "Me" << endl << endl << endl;
}

void printH()
{
	cout << "*    *\n";
	cout << "*    *\n";
	cout << "******\n";
	cout << "*    *\n";
	cout << "*    *\n";
}

int main()
{
	printMyCardInfo();
	printBlock();
	printIloveProgrammming();
	printH();

	return 0;
}
