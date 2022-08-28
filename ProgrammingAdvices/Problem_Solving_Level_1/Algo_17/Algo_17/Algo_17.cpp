#include <iostream>
using namespace std;

int main()
{
	unsigned short height, base;

	cout << "Enter the height of a triangle: \n";
	cin >> height;
	cout << endl;

	cout << "Enter the base of a triangle: \n";
	cin >> base;
	cout << endl;

	unsigned short area = (base * height) / 2;

	cout << "The area of the triangle: " << area << endl;


}