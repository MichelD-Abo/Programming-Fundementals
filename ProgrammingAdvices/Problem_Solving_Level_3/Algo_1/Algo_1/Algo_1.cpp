// Author: Michel. 


/*
* Program To Fill 3x3 Matrix with Random Number.
* Print Matrix.
*/

#include <iostream>

using namespace std;

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fill3x3MatrixWithRandomNumbers(int matrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = randomNumber(1, 100);
		}
	}
}

void printMatrix(int matrix[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int matrix[3][3];

	fill3x3MatrixWithRandomNumbers(matrix);

	cout << "The Following is an 3x3 random matrix: " << endl;
	printMatrix(matrix);

	system("pause>0");
}


