#include <iostream>

using namespace std;

void firstLoop()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << "Letter: " << char(i) << endl;

		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << endl;
		}

		cout << "____________________________________\n";
	}
}

void secondLoop()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void thirdLoop()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}

		cout << endl;
	}
}

void fourthLoop()
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

void fifthLoop()
{
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j);
		}
		cout << endl;

	}
}

void sixthLoop()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout << j << " ";
		}
		cout << endl;

	}
}

int main()
{
	firstLoop();
	secondLoop();
	thirdLoop();
	fourthLoop();
	fifthLoop();
	sixthLoop();

	return 0;
}