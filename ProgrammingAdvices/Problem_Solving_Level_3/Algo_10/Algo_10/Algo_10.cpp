// Author: Michel. 

/*
* Program To Fill two 3x3 Matrix with Random Numbers.
* Print The All Matrix.
* Write a Function to Sum the Elements Of The Matrix.
* Print Sum
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

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];

	fillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "\nMatrix # 1 : " << endl;
	printMatrix(matrix, 3, 3);

	cout << "\nSum Of Matrix # 1 Elements: " << getSumOFMatrixElements(matrix, 3, 3) << endl;


	system("pause>0");
}
