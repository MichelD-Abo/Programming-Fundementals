#include <iostream>

using namespace std;

int x = 400;
int y = 500;

void func()
{
	int x = 2;
	cout << x << endl;
}

int main()
{
	int x = 55;

	cout << x << endl;
	func();
	cout << ::x + ::y;
	return 0;
}