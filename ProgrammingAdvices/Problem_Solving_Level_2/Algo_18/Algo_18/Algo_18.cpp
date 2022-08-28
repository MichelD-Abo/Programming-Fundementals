#include <iostream>
#include <string>

using namespace std;

string readText()
{
    string txt = " ";

    cout << "Enter Text: ";
    getline(cin, txt);
    return txt;
}

string encryptText(string txt, short encryptionKey)
{

    for (int i = 0; i <= txt.length(); i++)
    {
       
        txt[i] = char(txt[i] + encryptionKey);
    }

        return  txt;


}

string decryptText(string txt, short encryptionKey)
{

    for (int i = 0; i <= txt.length(); i++)
    {
        txt[i] = char(txt[i] - encryptionKey);
    }

        return  txt;
}

int main()
{
    short encryptionKey = 1;
    string text = readText();
    string encryptTxt = encryptText(text, encryptionKey);
    string decryptTxt  = decryptText(encryptTxt, encryptionKey);

    cout << "Real Text: " << text << endl;
    cout << "Encrypt Text: " << encryptTxt << endl;
    cout << "dencrypt Text: " << decryptTxt << endl;

}


