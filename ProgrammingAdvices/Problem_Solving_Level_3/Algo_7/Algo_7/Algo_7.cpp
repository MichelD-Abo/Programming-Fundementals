// Author: Michel. 

/*
* Program To Fill 3x3 Matrix with Ordered Number.
* Transpose the Matrix.
* Print The Matrix.
*/

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

void fillMatrixWithOrderedNumbers(int matrix[3][3], short rows, short cols)
{
	int counter = 0;

	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			matrix[i][j] = ++counter;
		}
	}
}

void printMatrix(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(3) << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void printTransposedMatrix(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			cout << setw(3) << matrix[j][i] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	int matrix[3][3];

	fillMatrixWithOrderedNumbers(matrix, 3, 3);

	cout << "\nThe Following is 3X3 Ordered Matrix: " << endl;
	printMatrix(matrix, 3, 3);

	cout << "\nThe Following is A Transposed Matrix: " << endl;
	printTransposedMatrix(matrix, 3, 3);

	system("pause>0");
}


