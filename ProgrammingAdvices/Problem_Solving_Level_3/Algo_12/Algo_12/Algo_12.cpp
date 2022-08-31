// Author: Michel. 

/*
* Program To Fill two 3x3 Matrix with Random Numbers.
* Print The Matrices.
* Write a Function to See if Matrices are Typical.
*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int randomNumber(int from, int to)
{
	int randNum = 0;
	randNum = rand() % (to - from + 1) + from;

	return randNum;
}

void fillMatrixWithRandomNumbers(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			matrix[i][j] = randomNumber(1, 10);
		}
	}
}

void printMatrix(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			printf("%0*d\t", 2, matrix[i][j]);
		}
		cout << endl;
	}
}

bool AreTypicalMatrices(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (matrix1[i][j] != matrix2[i][j])
				return false;
		}
	}

	return true;
}

void printTypicalOrNot(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
	if (AreTypicalMatrices(matrix1, matrix2, 3, 3))
	{
		cout << "\nYes: Matrices Are Typical\n";
	}
	else
	{
		cout << "\nNo: Matrices Are NOT Typical\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int matrix1[3][3], matrix2[3][3];

	fillMatrixWithRandomNumbers(matrix1, 3, 3);

	cout << "\nMatrix # 1 : " << endl;
	printMatrix(matrix1, 3, 3);


	fillMatrixWithRandomNumbers(matrix2, 3, 3);

	cout << "\nMatrix # 2 : " << endl;
	printMatrix(matrix2, 3, 3);

	printTypicalOrNot(matrix1, matrix2, 3, 3);

	system("pause>0");
}
