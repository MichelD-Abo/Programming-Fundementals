#include <iostream>
#include <cmath>

using namespace std;

float areaOfCircleByRadiusFunction(float r)
{
	const float PI = 3.14;
	float area = PI * pow(r, 2);

	return area;
}


int main()
{
	float radius;

	cout << "Enter the radius of the circle : \n";
	cin >> radius;
	cout << endl;

	cout << "The area: " << areaOfCircleByRadiusFunction(radius) << " Ceiling of the area is: " << ceil(areaOfCircleByRadiusFunction(radius)) << endl;

	return 0;
}