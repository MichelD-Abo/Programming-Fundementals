#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cout << "Enter a number: \n";
	cin >> A;
	cout << endl;

	cout << "Enter a number: \n";
	cin >> B;
	cout << endl;

	cout << A << " = " << B << " is " << (A == B) << endl
		<< A << " != " << B << " is " << (A != B) << endl
		<< A << " > " << B << " is " << (A > B) << endl
		<< A << " < " << B << " is " << (A < B) << endl
		<< A << " >= " << B << " is " << (A >= B) << endl
		<< A << " <= " << B << " is " << (A <= B) << endl;

	return 0;

}