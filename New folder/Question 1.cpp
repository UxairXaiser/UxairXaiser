#include<iostream>
using namespace std;
void kidWithCandies(int candies[], int candiesListSize, int extraCandies);
int main()
{
	int candies[20], extra, size = 5;

	cout << "Enter array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> candies[i];
	}

	cout << "Enter the amount of extra candies: ";
	cin >> extra;

	kidWithCandies(candies, size, extra);


	system("pause");
	return 0;
}
void kidWithCandies(int candies[], int candiesListSize, int extraCandies)
{
	bool arr[20] = {false};
	int max = 0;

	for (int i = 0; i < candiesListSize; i++)
	{
		if (candies[max] < candies[i] )
		{
			max = i;
		}
	}
	arr[max] = true;

	for (int a = 0; a < candiesListSize; a++)
	{
		cout << arr[a] << " ";
	}
}

