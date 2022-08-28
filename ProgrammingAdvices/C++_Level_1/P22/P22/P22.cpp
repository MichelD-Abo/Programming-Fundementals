#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int sum = 0;


	for (int i = 1; i <= 5; i++)
	{

		cout << "Enter number: ";
		cin >> number;

		if (number > 50)
		{
			cout << "Will not be added.\n";
			continue;
		}
		sum += number;

	}

	cout << sum;


	
}

