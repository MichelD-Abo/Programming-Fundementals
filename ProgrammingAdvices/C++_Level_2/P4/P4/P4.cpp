#include <iostream>
#include <vector>
#include "myLib.h"

using namespace std;

void fillVectorWithNumbers(vector <int> &vNumbers)
{
	char again = 'y';

	do
	{
		vNumbers.push_back(myLib::readNumber());

		cout << "Do You Want To Add More Numbers (y\\n)? ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}

void printVector(vector <int> &vNumbers)
{
	for (int &i : vNumbers)
	{
		cout << i << endl;
	}
}

int main()
{
	vector <int> vNumbers;

	fillVectorWithNumbers(vNumbers);
	printVector(vNumbers);
}

