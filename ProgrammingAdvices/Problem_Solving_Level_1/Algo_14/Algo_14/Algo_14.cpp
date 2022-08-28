#include <iostream>

using namespace std;

void swapNumProcedure(short &A, short &B)
{
	short temp;

	temp = A;
	A = B;
	B = temp;

	cout << A << " " << B << endl;
}

int main()
{
	short number1, number2;

	cout << "Enter number1: \n";
	cin >> number1;
	cout << endl;

	cout << "Enter number2: \n";
	cin >> number2;
	cout << endl;

	cout << "The resut of swaping " << number1 << " and " << number2 << " will be: ";
	swapNumProcedure(number1, number2);

	return 0;
}
