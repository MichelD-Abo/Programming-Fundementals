#include <iostream>
#include <string>

using namespace std;

void printTabelHeader()
{
    cout << "\n\t\t\t" << "Multiplication tabel from 1 to 10" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\t " << i << " ";
    }
    cout << "\n_____________________________________________________________________________________\n";

}

string columSperator(int i)
{
    if (i < 10)
        return "   |";
    else
        return "  |";
}
void printMultiplicationTable()
{
    printTabelHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << columSperator(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << j * i << "\t";

        }
        cout << endl;

    }

}

int main()
{
    
    printMultiplicationTable();
    return 0;
}
