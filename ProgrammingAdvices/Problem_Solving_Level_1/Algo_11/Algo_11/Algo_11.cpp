#include <iostream>

using namespace std;

void checkGradeAverageProcedure(float average);
float calculateAverageFunction(float grade1, float grade2, float grade3);

int main()
{
	float g1, g2, g3;

	cout << "Enter your first grade: \n";
	cin >> g1;
	cout << endl;

	cout << "Enter your second grade: \n";
	cin >> g2;
	cout << endl;

	cout << "Enter your third grade: \n";
	cin >> g3;
	cout << endl;

	float average = calculateAverageFunction(g1, g2, g3);

	cout << "The average of your grades is: " << average << endl;

	checkGradeAverageProcedure(average);
}

void checkGradeAverageProcedure(float average)
{
	if (average >= 50)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}
}

float calculateAverageFunction(float grade1, float grade2, float grade3)
{
	return (grade1 + grade2 + grade3) / 3;
}

