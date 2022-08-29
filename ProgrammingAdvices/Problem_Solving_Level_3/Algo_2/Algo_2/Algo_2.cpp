// Author: Michel. 


/*
* Program To Fill 3x3 Matrix with Random Number.
* Sum Each Row, Then Print Results.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int randomNumber(int from, int to)
{
	int randNum = 0;
	randNum = rand() % (to - from + 1) + from;

	return randNum;
}

void fill3x3MatrixWithRandomNumbers(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			matrix[i][j] = randomNumber(1, 100);
		}
	}
}

void printMatrix(int matrix[3][3], short rows, short cols)
{
	cout << "\nThe Following is 3X3 Random Matrix: " << endl;

	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(3) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void sumEachRowInMatrix(int matrix[3][3], short rows, short cols)
{
	cout << "\nThe Following Are The Sum Of Each Row In A Matrix: " << endl;

	for (short i = 0; i < rows; i++)
	{
		int sum = 0;
		printf(" Row %d Sum = ", i + 1);

		for (short j = 0; j < cols; j++)
		{
			sum = sum + matrix[i][j];
		}
		cout << sum << endl;

	}
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];

	fill3x3MatrixWithRandomNumbers(matrix,3,3);

	printMatrix(matrix,3,3);

	sumEachRowInMatrix(matrix, 3, 3);

	system("pause>0");
}
