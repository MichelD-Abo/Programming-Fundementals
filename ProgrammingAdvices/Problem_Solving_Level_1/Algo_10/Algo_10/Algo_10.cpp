#include <iostream>
using namespace std;

int main()
{
	short A, B, C;

	cout << "Enter your first mark: \n";
	cin >> A;
	cout << endl;

	cout << "Enter your second mark: \n";
	cin >> B;
	cout << endl;

	cout << "Enter your third mark: \n";
	cin >> C;
	cout << endl;

	short sum = A + B + C;
	short avr = sum / 3;

	cout << "The average of your markes is: " << avr << endl;

}