#include <iostream>

using namespace std;

float squareFunction(float a)
{
    float sq = pow(a, 2);

    return sq;

}

float cubeFunction(float a)
{
    float cub = pow(a, 2) * a;

    return cub;
}

float quadFunction(float a)
{
    float quad = pow(a, 2) * pow(a, 2);

    return quad;
}



int main()
{
    float num;

    cout << "Enter number: \n";
    cin >> num;
    cout << endl;

    cout << "Square of " << num << " is: " << squareFunction(num) << " rounding of the number is: " << round(squareFunction(num)) << endl  << endl
        << "Cube of " << num << " is: " << cubeFunction(num) << " rounding of the number is: " << round(cubeFunction(num)) << endl << endl
        << "fourth power of " << num << " is: " << quadFunction(num) << " rounding of the number is: " << round(quadFunction(num)) << endl << endl;

    return 0;

}