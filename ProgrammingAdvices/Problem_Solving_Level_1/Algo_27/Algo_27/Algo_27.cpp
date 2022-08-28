#include <iostream>

using namespace std;


unsigned short getNfromUserFunction()
{
    unsigned short N;

    cout << "Enter a number: ";
    cin >> N;

    return N;
}

void fromNTo1ForLoopProcedure(unsigned short N)
{
    for (unsigned short i = N; i >= 1; i--)
    {
        cout << i << endl;
    }
}

void fromNto1WhileLoopProcedure(unsigned short N)
{
    unsigned short i = N;

    while (i >= 1)
    {
        cout << i << endl;
        i--;
    }
}

int main()
{

    unsigned short N = getNfromUserFunction();
 
    cout << "********************************************\n"
        << "From "<< N << " to 1 is: " << endl;
    fromNto1WhileLoopProcedure(N);


    return 0;
}
