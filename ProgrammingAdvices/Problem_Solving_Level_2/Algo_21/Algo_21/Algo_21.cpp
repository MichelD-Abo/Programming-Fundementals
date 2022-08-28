#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int readPositiveNumber(string message)
{
    int number = 0;

    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

int generateRandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void generate4CapitalLetters()
{
    for (int i = 1; i <= 4; i++)
    {
        cout << char(generateRandomNumber(65, 90));
    }
}

void generateAllKeys(int keys)
{
    for (int i = 1; i <= keys; i++)
    {
        cout << "Key " << "[" << i << "] : "; 
        generate4CapitalLetters();
        cout << "-";
        generate4CapitalLetters();
        cout << "-";
        generate4CapitalLetters();
        cout << "-";
        generate4CapitalLetters();
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

   generateAllKeys(readPositiveNumber("Enter Positive Number: "));

    return 0;
}

