// Author: Michel. 


/*
* Program To Fill 3x3 Matrix with Random Number.
* Sum Each Row In Separate 1D Array.
* Print Results From Array.
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

int rowSum(int matrix[3][3], short numberOfRows, short cols)
{
	int sum = 0;

	for (short i = 0; i < cols; i++)
	{
		sum += matrix[numberOfRows][i];
	}

	return sum;
}

void fillArrayWithSumOfEachRow(int arr[3], int matrix[3][3], short rows, short cols)
{
	for (short i = 0; i < rows; i++)
	{
		arr[i] = rowSum(matrix, i, cols);
	}
}

int getArrayElemet(int arr[3], short numOfRows)
{
	return arr[numOfRows];	
}

void printSumEachRowInMatrixFromArray(int arr[3], short rows)
{
	cout << "\nThe Following Are The Sum Of Each Row In A Matrix: " << endl;

	for (short i = 0; i < rows; i++)
	{
		printf(" Row %d Sum = %d \n", i + 1, getArrayElemet(arr,i));
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3],  arr[3];

	fillMatrixWithRandomNumbers(matrix, 3, 3);

	printMatrix(matrix, 3, 3);

	fillArrayWithSumOfEachRow(arr, matrix, 3, 3);

	printSumEachRowInMatrixFromArray(arr,3);

	system("pause>0");
}


