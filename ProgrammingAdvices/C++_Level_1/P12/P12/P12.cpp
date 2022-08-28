#include <iostream>
#include <string>

using namespace std;

int main()
{
	string string1, string2, string3;

	cout << "Enter string1: \n";
	getline(cin, string1);
	cout << endl;
	
	cout << "Enter string2: \n";
	cin >> string2;
	cout << endl;
	
	cout << "Enter string3: \n";
	cin >> string3;
	cout << endl;

	cout << "***************************************\n"
		<< "Length of string1 is: " << string1.length() << endl
		<< "Characters at 0,2,4,7 are: " << string1[0] << ", " << string1[2] << ", " << string1[4] << ", " << string1[7] << endl
		<< "Concatentating string2 and string3 = " << string2 + string3 << endl
		<< string2 << " * " << string3 << " = " << stoi(string2) * stoi(string3) << endl;

	return 0;
	
	
}