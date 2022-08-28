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

float areaOfCircleByCircumfenceFunction(float I)
{
    const float PI = 3.14;
    float area = pow(I, 2) / (PI * 4);

    return area;
}

int main()
{
    float circumfence = 0, area = 0;

    circumfence = readNumber("Enter the circumfrence of the circle: ");
    area = areaOfCircleByCircumfenceFunction(circumfence);

    cout << "The area is: " << area << " Flooring of the area is: " << floor(area) << endl;

    return 0;
}
