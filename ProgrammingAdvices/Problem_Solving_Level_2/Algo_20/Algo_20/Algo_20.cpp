#include <iostream>
#include <cstdlib>

using namespace std;

enum enRandStuff
{
    smallLetter = 1,
    capitalLetter = 2,
    specialLetter = 3,
    digit = 4
};

void printRandomAccordingToEnum(enRandStuff number)
{

    switch (number)
    {
    case enRandStuff::smallLetter:
        cout << char(rand() % (122 - 97 + 1) + 97) << endl;
        break;
    case enRandStuff::capitalLetter:
        cout << char(rand() % (90 - 65 + 1) + 65) << endl;
        break;
    case enRandStuff::specialLetter:
        cout << char(rand() % (47 - 33 + 1) + 33) << endl;
        break;
    case enRandStuff::digit:
        cout << rand() % 10 << endl;
        break;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    printRandomAccordingToEnum(enRandStuff::smallLetter);
    printRandomAccordingToEnum(enRandStuff::capitalLetter);
    printRandomAccordingToEnum(enRandStuff::specialLetter);
    printRandomAccordingToEnum(enRandStuff::digit);


    return 0;
}







