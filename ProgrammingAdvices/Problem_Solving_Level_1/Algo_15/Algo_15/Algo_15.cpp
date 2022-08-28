#include <iostream>

using namespace std;

float areaOfRectangleByHeighAndBaseFunction(float a, float b)
{
	float area = a * b;
	
	return area;
}

int main()
{
	float height, base;

	cout << "Enter the height of the rectangle: \n";
	cin >> height;
	cout << endl;

	cout << "Enter the base of the rectangle: \n";
	cin >> base;
	cout << endl;

	cout << "The area of the rectangle = " << areaOfRectangleByHeighAndBaseFunction(height, base) << endl;

	return 0;
}