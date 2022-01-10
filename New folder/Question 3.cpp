#include<iostream>
using namespace std;
bool result(int i , int j);
int main()
{
	int const SIZE = 3 ;
	int moves;
	char arr[SIZE][SIZE];
	char input;
	
	cout << "Enter moves: ";
	cin >> moves;
	
	int i = 0 , j = 0; 
	
	cout << "Move the robot using r,l,u,d: ";
	while(moves > 0)
	{
		cin >> 	input;
		
		
		switch(input)
		{
			case 'r':
				i++;
				if(i == SIZE)
				{
					i = 0;
				}
				break;	
			case 'l':
				i--;
				if(i < 0)
				{
					i = SIZE-1;
				}
				break;
			case 'u':
				j--;
				if(j < 0)
				{
					j = SIZE-1;
				}
				break;
			case 'd':
				j++;
				if(j == SIZE)
				{
					j = 0;
				}
				break;
			default:
				cout << "WRONG INPUT";	
		}
		 moves--;	
	cout << "Moves Left: " <<  moves <<  endl;
	}
	
	if(result(i,j))
	{
		cout << "TRUE";
	}
	else
	{
		cout << "FALSE";
	}
	
	return 0;
}
bool result(int i , int j)
{
	if(i == 0 && j == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
