#include <iostream>

using namespace std;

int readNumbersFunction()
{
	int A;

	cout << "Enter number: ";
	cin >> A;

	return A;
}

int findMaxOfThreeNumberFunction(int A, int B, int C)
{
	if (A > B && A > C)
	{
		return A;
	}
	else if (B > A && B > C)
	{
		return B;
	}
	else
	{
		return C;
	}
}

int main()
{
	int A, B, C, findMax;

	A = readNumbersFunction();
	B = readNumbersFunction();
	C = readNumbersFunction();

	findMax = findMaxOfThreeNumberFunction(A, B, C);

	cout << "The largest number is: " << findMax << endl;

}
