#include <iostream>

using namespace std;


float calculateGradeAverageFunction(float g1, float g2, float g3)
{
    float avr = (g1 + g2 + g3) / 3;
    return avr;
}

int main()
{
    const int n = 3;
    float grades[n];

    cout << "Enter grade1: \n";
    cin >> grades[0];
    cout << endl;

    cout << "Enter grade2: \n";
    cin >> grades[1];
    cout << endl;

    cout << "Enter grade3: \n";
    cin >> grades[n-1];
    cout << endl;

    cout << "___________________________________________\n"
        << "The average of your grades is: " << calculateGradeAverageFunction(grades[0], grades[1], grades[n - 1]) << endl;



}
