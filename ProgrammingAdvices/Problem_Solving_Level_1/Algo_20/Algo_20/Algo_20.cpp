#include <iostream>
#include <cmath>

using namespace std;

float areaOfCircleInscribedInSquareFunction(float A)
{
    const float PI = 3.14;
    float area = (PI * pow(A, 2)) / 4;

    return area;
}

int main()
{
    float squareArea;

    cout << "Enter area of the square that a circle is inscribed in: \n";
    cin >> squareArea;

    cout << "Area is: " << areaOfCircleInscribedInSquareFunction(squareArea) << " Cieling of the area is: " << ceil(areaOfCircleInscribedInSquareFunction(squareArea)) << endl;

    return 0;
}
