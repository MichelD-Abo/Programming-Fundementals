#include <iostream>

using namespace std;

void readGradesFromArrayProcedure(float g[3])
{
	cout << "Enter your first grade: \n";
	cin >> g[0];
	cout << endl;

	cout << "Enter your second grade: \n";
	cin >> g[1];
	cout << endl;

	cout << "Enter your third grade: \n";
	cin >> g[2];
	cout << endl;
}

void printGradesFromArrayProcedure(float g[3])
{
	cout << "Your grades are " << g[0] << ", " << g[1] << " and " << g[2] << endl;
}

float calcAverageOfGradesFunction(float g[3])
{
	return (g[0] + g[1] + g[2]) / 3;
}

int main()
{
	float grades[3];

	readGradesFromArrayProcedure(grades);
	printGradesFromArrayProcedure(grades);
	cout << "_________________________________\n"
		<< "The average of your grades is: " << calcAverageOfGradesFunction(grades) << endl;
} 

