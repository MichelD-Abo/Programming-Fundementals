#include <iostream>
#include <cmath>

using namespace std;

float readNumber(string message)
{
    float number = 0;

    cout << message;
    cin >> number;

    return number;

}

float areaOfCircleInscribedinIsoTriangleFunction(float a, float b)
{
    const float PI = 3.14;
    float area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

    return area;
}

int main()
{
    float side = 0, base = 0, area = 0;

    side = readNumber("Enter triangles side: ");
    base = readNumber("Enter triangles base: ");
    area = areaOfCircleInscribedinIsoTriangleFunction(side, base);

    cout << "The area of the circle is: " << area << " Flooring the area is: " << floor(area) << endl;

    return 0;
}
