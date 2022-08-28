#include <iostream>

using namespace std;

string readPassWord()
{
    string pass = "";

    cout << "Enter 3 capital letters: ";
    cin >> pass;

    return pass;
}

bool isCorretPass(string word, string pass)
{
    return word == pass;
}

void checkPassWord(string word)
{
    int trial = 0;
    string passWord = readPassWord();

    do
    {

        if (isCorretPass(word, passWord))
        {
            cout << "Pass Word is: " << word << endl;
            cout << "Found after " << trial << " trials" << endl;
            break;

        }
        else
        {
            trial++;
            cout << "Trial " << "[" << trial << "] : " << word << endl;
        }
    } while (!isCorretPass(word, passWord));

}

void getLettersFromAAAtoZZZ()
{
    string word = "";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                checkPassWord(word);

                word = " ";
            }
        }

    }
}




int main()
{
    getLettersFromAAAtoZZZ();

    return 0;
}





