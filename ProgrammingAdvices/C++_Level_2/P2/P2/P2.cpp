#include <iostream>

using namespace std;

int prod = 1;


void printNumbersToDowmToFrom(int from, int to)
{
	if (to >= from)
	{
		cout << to << endl;
		printNumbersToDowmToFrom(from, --to);
	}
}

int calculateNpowerM(int N, int M)
{
	if (M == 0)
	{
		return ::prod;
	}

	else if (M > 0)
	{
		::prod *= N;
		calculateNpowerM(N, --M);
	}

	return ::prod;
}

int main()
{
	printNumbersToDowmToFrom(1, 10);
	cout << calculateNpowerM(2, 0) << endl;
}




