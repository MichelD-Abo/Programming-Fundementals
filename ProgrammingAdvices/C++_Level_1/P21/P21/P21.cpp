#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 12,12213,123,123,20,123,123,123,123,42334 };
	int search = 20;

	for (int i = 0; i <= size(arr) - 1; i++)
	{
		cout << "Iteration: " << i +1 << endl;

		if (search == arr[i])
		{
			cout << "Found at: " << i << endl;
			break;
		}

	}

	return 0;
}
