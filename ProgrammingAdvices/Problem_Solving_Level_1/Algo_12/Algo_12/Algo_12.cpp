#include <iostream>

using namespace std;

int readNumbersFunction()
{
	int A;

	cout << "Enter number: ";
	cin >> A;

	return A;
}
int findMaxNumberFunction(int A, int B)
{
	if (A > B)
	{
		return A;
	}
	else
	{
		return B;
	}
}

int main()
{
	int A, B, findMax;

	A = readNumbersFunction();
	B = readNumbersFunction();

	findMax = findMaxNumberFunction(A, B);

	cout << "The largest number is: " << findMax << endl;

}
