// Author: Michel. 

/*
* Program To Fill two 3x3 Matrix with Random Numbers.
* Print Middle Row And Coloumn of The Matrix.
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

void printMiddleRow(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < cols; i++)
	{
		printf("%0*d\t", 2, matrix[1][i]);
	}
	cout << endl;

}

void printMiddleCol(int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		printf("\t%0*d\t\n", 2, matrix[i][1]);
	}
	cout << endl;

}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];

	fillMatrixWithRandomNumbers(matrix, 3, 3);

	cout << "\nMatrix     : " << endl;
	printMatrix(matrix, 3, 3);

	cout << "\nMiddle Row : " << endl;
	printMiddleRow(matrix, 3, 3);

	cout << "\nMiddle Col : " << endl;
	printMiddleCol(matrix, 3, 3); (matrix, 3, 3);



	system("pause>0");
}


