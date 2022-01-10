#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int arr[10] , j , key;
	
	for(int i = 0 ; i < 10 ; i++)
	{
	arr[i] = rand() % 10 + 1;
	}
	
	for(int i = 0 ; i < 10 ; i++)
	{
		cout << arr[i]  << " ";
	}
	cout << endl;
	
	for(int i = 1 ; i < 10 ; i++)
	{
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			arr[j]  = -1;
			j = j - 1;
		}
	
	}
	
	for(int i = 0 ; i < 10 ; i++)
	{
		cout << arr[i]  << " ";
	}
	return 0;
}
