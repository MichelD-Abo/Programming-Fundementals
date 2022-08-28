#include <iostream>
#include <cmath>

using namespace std;

float areaofRectangleBySideAndDiagFunction(float a, float b)
{
	float area = a * sqrt(pow(b, 2) - pow(a, 2));

	return area;
}

int main()
{
	float sideOfRec, diagOfRec;


	cout << "Enter one side of the rectangle: \n";
	cin >> sideOfRec;
	cout << endl;

	cout << "Enter the diagonal of the rectangle: \n";
	cin >> diagOfRec;
	cout << endl;


	cout << "The area is: " << areaofRectangleBySideAndDiagFunction(sideOfRec,diagOfRec);

	return 0;
}