#include <iostream>

using namespace std;

enum enOperators
{
    Add = 1,
    Sub = 2,
    Divide = 3,
    Multi = 4
};

void showCalculatorMenuProcedure()
{
    cout << "************************" << endl;
    cout << "       Calculator        " << endl;
    cout << "************************" << endl
        << "(1) +\n"
        << "(2) -\n"
        << "(3) /\n"
        << "(4) *\n"
        << "Pick and operator: " << endl;
}

enOperators readOperatorFunction()
{
    int op;

    cin >> op;
    return (enOperators)op;

}

int readNumbersFunction()
{
    int A;

    cout << "Enter  number: \n";
    cin >> A;
    return A;

}

int calculateCalcInputFunction(int A, int B, enOperators opt)
{
    switch (opt)
    {
    case Add:
        return  A + B;
        break;
    case Sub:
        return A - B;
        break;
    case Divide:
        return A / B;
        break;
    case Multi:
        return A * B;
        break;
    default:
        return 0;
        break;
    }
}


int main()
{



    showCalculatorMenuProcedure();

    cout << "________________________________________\n";
    cout << "The result is: " << calculateCalcInputFunction(readNumbersFunction(), readNumbersFunction(), readOperatorFunction());
    return 0;
}

