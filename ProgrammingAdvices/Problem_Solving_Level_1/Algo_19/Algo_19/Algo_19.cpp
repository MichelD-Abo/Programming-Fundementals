#include <iostream>
#include <cmath>

using namespace std;

float areaOfCircleByDiameterFunction(float d)
{
	const float PI = 3.14;
	float area = (PI * pow(d, 2)) / 4;

	return area;
}

int main()
{
	float diameter;

	cout << "Enter the diameter of the circle: \n";
	cin >> diameter;
	cout << endl;

	cout << "Area of the circle is : " << areaOfCircleByDiameterFunction(diameter) << " Ceiling of the are is: " << ceil(areaOfCircleByDiameterFunction(diameter)) << endl;

	return 0;
}