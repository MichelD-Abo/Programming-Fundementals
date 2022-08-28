#include <iostream>

using namespace std;


unsigned short getNfromUserFunction()
{
    unsigned short N;

    cout << "Enter a number: ";
    cin >> N;

    return N;
}

void from1ToNForLoopProcedure(unsigned short N)
{
    for (unsigned short i = 1; i <= N; i++)
    {
        cout << i << endl;
    }
}

void from1ToNWhileLoopProcedure(unsigned short N)
{
    unsigned short i = 1;

    while (i<=N)
    {
        cout << i << endl;
        i++;
    }
}

int main()
{
    unsigned short N = getNfromUserFunction();

    cout << "********************************************\n"
        << "From 1 to " << N << " is: " << endl;
    from1ToNWhileLoopProcedure(N);
   

    return 0;
}
