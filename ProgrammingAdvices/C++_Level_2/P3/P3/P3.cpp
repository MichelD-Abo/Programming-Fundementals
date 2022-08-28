#include <iostream>
#include <cstdio>
#include "myLib.h"

using namespace std;

void fill2dArrayWithMultiplicationTable(int arr[100][100], int& length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			arr[i][j] = myLib::getProduct(i + 1, j + 1);
		}
	}
}

void print2dArray(int arr[100][100], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}

int main()
{
	int arr[100][100], length = 0;

	length = 10;
	fill2dArrayWithMultiplicationTable(arr, length);
	print2dArray(arr, length);

}

