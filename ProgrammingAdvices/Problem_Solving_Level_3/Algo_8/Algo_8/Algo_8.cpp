// Author: Michel. 

/*
* Program To Fill two 3x3 Matrix with Random Numbers.
* Multiply the Elements of Matrices (Not Formal Matrix Multiplication) Into a third Matrix.
* Print The All Matrices.
*/

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

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
			matrix[i][j] = randomNumber(1,10);
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

void multiplyElementsInMatrices(int matrix1[3][3], int matrix2[3][3], int prodMatrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			prodMatrix[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix1[3][3], matrix2[3][3], prodMatrix[3][3];

	fillMatrixWithRandomNumbers(matrix1, 3, 3);

	cout << "\nMatrix # 1 : " << endl;
	printMatrix(matrix1, 3, 3);

	fillMatrixWithRandomNumbers(matrix2, 3, 3);
	cout << "\nMatrix # 2 : " << endl;
	printMatrix(matrix2, 3, 3);

	multiplyElementsInMatrices(matrix1, matrix2, prodMatrix, 3, 3);
	cout << "\nResult    : " << endl;
	printMatrix(prodMatrix, 3, 3);

	system("pause>0");
}
