#include<iostream>
#include <cstdlib>

enum enCharType
{
	SmallLetter = 1,
	CapitalLetter = 2,
	SpecialLetter = 3,
	Digit = 4
};

using namespace std;

int wordLength = 0;

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

int randomNumber(int from, int to)
{
	return rand() % (to - from + 1) + from;
}

char getRandomCharType(enCharType charType)
{
	switch (charType)
	{
	case SmallLetter:
		return char(randomNumber(97, 122));
	case CapitalLetter:
		return char(randomNumber(65, 90));
	case SpecialLetter:
		return char(randomNumber(33, 47));
	case Digit:
		return char(randomNumber(48, 57));
	}
}

string generateRandomWord(int &wordLength)
{
	string word = "";


	for (int i = 1; i <= wordLength; i++)
	{
		word += getRandomCharType(enCharType(randomNumber((int)SmallLetter, (int)Digit)));
	}

	return word;
}

string generateRandomKey()
{
	string key = "";

	 key += generateRandomWord(::wordLength) + "-";
	 key += generateRandomWord(::wordLength) + "-";
	 key += generateRandomWord(::wordLength) + "-";
	 key += generateRandomWord(::wordLength);

	 return key;
}

void fillArrayWithKeys(string arrayOfKeys[100], int &Length)
{
	for (int i = 0; i < Length; i++)
	{
		arrayOfKeys[i] = generateRandomKey();
	}
}

void printArrayWithKeys(string arrayOfKeys[100], int Length)
{
	cout << "\n";
	cout << "Array Elements: \n";

	for (int i = 0; i < Length; i++)
	{
		cout << "Element[" << i + 1 << "]: " << arrayOfKeys[i] << endl;
	}
	cout << "\n";
}


int main()
{
	srand((unsigned)time(NULL));

	string ArrayOfKeys[100];
	int Length = 0;

	Length = readPositiveNumber("Enter How Many Keys You Want: ");
	::wordLength = readPositiveNumber("Enter length of Words in Keys: ");


	fillArrayWithKeys(ArrayOfKeys, Length);
	printArrayWithKeys(ArrayOfKeys, Length);
	return 0;
}