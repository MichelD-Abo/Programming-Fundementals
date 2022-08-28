#include <iostream>
#include <cmath>

using namespace std;

int mPowerOfNfunction(int N, int M)
{
	return pow(N, M);
}

int forLoopPowerOfMfunction(int N, int M)
{
	int product = 1;

	for (int i = 1; i <= M; i++)
	{
		product = product * N;
	}

	return product;
}

int whileLoopPowerOfMfunction(int N, int M)
{
	int i = 1;
	int prod = 1;

	while (i <= M)
	{
		prod *= N;

		i++;
	}

	return prod;
}

int getNumberFunction()
{
	int N;

	cout << "Enter number: \n";
	cin >> N;

	return N;
}




int main()
{
	int N = getNumberFunction();
	int M = getNumberFunction();

	int fo = forLoopPowerOfMfunction(N, M);
	int whi = whileLoopPowerOfMfunction(N, M);


	cout << "The " << M <<"th power of " << N << " via for loop is: "<<  fo << " rounding of it is: " << round(fo) << endl;
	cout << "The " << M << "th power of " << N << " via while loop is: " << whi << " rounding of it is: " << round(whi) << endl;

	return 0;

}