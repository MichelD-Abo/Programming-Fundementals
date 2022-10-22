// Author: Michel. 

/*
* Program To Fill two 3x3 Matrix with Random Numbers.
* Print The Matrices.
* Write a Function to See if Matrices are equal.
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

int getSumOFMatrixElements(int matrix[3][3], short rows, short cols)
{
	int sum = 0;

	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			sum += matrix[i][j];
		}
	}

	return sum;
}

bool AreEqualMatrices(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
	return (getSumOFMatrixElements(matrix1,3,3) == getSumOFMatrixElements(matrix2,3,3));
}

void printEqualOrNot(int matrix1[3][3], int matrix2[3][3], short rows, short cols)
{
	if (AreEqualMatrices(matrix1,matrix2,3,3))
	{
		cout << "\nYes: Matrices Are Equal\n";
	}
	else
	{
		cout << "\nNo: Matrices Are NOT Equal\n";
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

	printEqualOrNot(matrix1, matrix2, 3, 3);

	system("pause>0");
}