#include <iostream>
#include <cmath>

using namespace std;

void readNumbers(float& triangleSide1, float& triangleSide2, float& triangleSide3)
{
	cout << "Enter triangle side1: ";
	cin >> triangleSide1;
	cout << endl;

	cout << "Enter triangle side2: ";
	cin >> triangleSide2;
	cout << endl;

	cout << "Enter triangle side3: ";
	cin >> triangleSide3;
	cout << endl;
}

float areaOfCircleDescribedAroundArbitaryTriangleFunction(float a, float b, float c)
{
	const float PI = 3.14;
	float p = (a + b + c) / 2;
	float T = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
	float area = PI * pow(T, 2);

	return area;
}

int main()
{
	float triangleSide1 = 0, triangleSide2 = 0, triangleSide3 = 0, area = 0;

	readNumbers(triangleSide1, triangleSide2, triangleSide3);
	area = areaOfCircleDescribedAroundArbitaryTriangleFunction(triangleSide1, triangleSide2, triangleSide3);


	cout << "The area of the circle is: " << area << " Rounding of the area is: " << round(area) << endl;

	return 0;
}