#include <iostream>
#include <cstdlib >

using namespace std;

void print3RandomNumbersFrom1To10()
{
    srand((unsigned)time(NULL));

    for (int i = 1; i <= 3; i++)
    {
        cout << (rand() % 10) + 1 << endl;

    }
}
int main()
{
    print3RandomNumbersFrom1To10();

    return 0;
}



