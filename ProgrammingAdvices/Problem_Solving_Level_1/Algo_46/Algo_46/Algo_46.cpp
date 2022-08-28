#include <iostream>

using namespace std;

enum enLetter { small = 1, capital = 2};

enLetter readLetterMenuFucntion();
void getReadLetterMenuProcedure(enLetter letter);
void whileLoopSmallLetterProcedure();
void whileLoopCapitalLetterProcedure();
void forLoopSmallLetterProcedure();
void forLoopCapitalLetterProcedure();
void showLetterMenuProcedure();


int main()
{
    enLetter A;

    do
    {
        showLetterMenuProcedure();
        A = readLetterMenuFucntion();
        getReadLetterMenuProcedure(A);

    } while (A != 1 && A != 2);
 


    return 0;
}


enLetter readLetterMenuFucntion()
{
    int letter;

    cin >> letter;

    return (enLetter)letter;
}

void getReadLetterMenuProcedure(enLetter letter)
{
    
    switch (letter)
    {
    case small:
        whileLoopSmallLetterProcedure();
        break;
    case capital:
        whileLoopCapitalLetterProcedure();
        break;
    }
}

void whileLoopSmallLetterProcedure()
{
    int stop = 122;
    int i = 97;

    while (i <= stop)
    {
        cout << char(i) << " ";
        i++;
    }


}

void whileLoopCapitalLetterProcedure()
{
    int stop = 90;
    int i = 65;

    while (i <= stop)
    {
        cout << char(i) << " ";
        i++;
    }

}

void forLoopSmallLetterProcedure()
{
    int stop = 122;

    for (int i = 97; i <= stop; i++)
    {
        cout << char(i) << " ";
    }
}

void forLoopCapitalLetterProcedure()
{
    int stop = 90;

    for (int i = 65; i <= stop; i++)
    {
        cout << char(i) << " ";
    }
}

void showLetterMenuProcedure()
{
    cout << "\n****************************\n";
    cout << "          Letters           \n";
    cout << "****************************\n";
    cout << "1: Small Letters\n";
    cout << "2: Capital Letters\n";
    cout << "____________________________\n";
    cout << "Choose the lettes that you want: ";
}
