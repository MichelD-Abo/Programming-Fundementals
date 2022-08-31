// Author: Michel. 

/*
* Write a Function to See if a Matrix is Identity.
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

bool isIdentityMatrix(int matrix[3][3],short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		for (short j = 0; j < cols; j++)
		{
			if (i==j && matrix[i][i] != 1 )
			{
				return false;
			}
		}
	}

	return true;
}

void printIdentityMatrix(int matrix[3][3], short rows, short cols)
{
	if (isIdentityMatrix(matrix, 3, 3))
	{
		cout << "\nYes: is Identity Matrix \n";
	}
	else
	{
		cout << "\nNo: is Not Identity Matrix\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int matrix1[3][3]=
	{
		{1,0,0},
		{0,1,0},
		{0,0,1}
	};

	int matrix2[3][3];


	cout << "\nMatrix # 1 : " << endl;
	printMatrix(matrix1, 3, 3);

	printIdentityMatrix(matrix1,  3, 3);


	fillMatrixWithRandomNumbers(matrix2, 3, 3);
	cout << "\nMatrix # 2 : " << endl;
	printMatrix(matrix2, 3, 3);
	printIdentityMatrix(matrix2, 3, 3);


	system("pause>0");
}

