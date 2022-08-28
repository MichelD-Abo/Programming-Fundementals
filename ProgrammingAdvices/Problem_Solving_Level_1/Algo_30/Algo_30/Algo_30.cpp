#include <iostream>

using namespace std;

int factorialForLoopFunction(int N)
{
	int product = 1;

	for (int i = N; i >= 1; i--)
	{
		product = product * i;
	}

	return product;
}
int factorialWhileLoopFunction(int N)
{
	int i = N;
	int product = 1;

	while (i >= 1)
	{
		product *= i;
		i--;
	}

	return product;

}
int getNumberFunction()
{
	int N;

	do
	{
		cout << "Enter number: ";
		cin >> N;
	} while (N < 0);

	return N;
}

int main()
{
	int A = getNumberFunction();

	cout << "Factorial of " <<  A <<" via for loop is: " << factorialForLoopFunction(A) << endl;
	cout << "Factorial of " << A << " via while loop is: " << factorialWhileLoopFunction(A) << endl;

	return 0;
}