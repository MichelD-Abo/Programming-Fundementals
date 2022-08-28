#include <iostream>
using namespace std;

int main()
{
	int A, B;

	cout << "Enter first number A: \n";
	cin >> A;
	cout << endl;

	cout << "Enter second number B: \n";
	cin >> B;
	cout << endl;

	cout << A << " + " << B << " = " << A + B << endl
		<< A << " - " << B << " = " << A - B << endl
		<< A << " * " << B << " = " << A * B << endl
		<< A << " / " << B << " = " << A / B << endl
		<< A << " % " << B << " = " << A % B << endl;

	// rest of homework in problem_solving dir
}