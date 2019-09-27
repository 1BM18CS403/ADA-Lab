#include <bits/stdc++.h>
#include<stdio.h> 
using namespace std; 
static int sq;
bool FindUnassignedLocation(int grid[N][N], int &row, int &col); 
bool isSafe(int grid[N][N], int row, int col, int num); 

bool SolveSudoku(int grid[N][N]) 
{ 
	int row, col; 
        if (!FindUnassignedLocation(grid, row, col)) 
	return true; 

	for (int num = 1; num <= 9; num++) 
	{ 
		if (isSafe(grid, row, col, num)) 
		{ 

			grid[row][col] = num; 

			if (SolveSudoku(grid)) 
				return true; 

			grid[row][col] = UNASSIGNED; 
		} 
	} 
	return false;  
} 

bool FindUnassignedLocation(int grid[N][N], int &row, int &col) 
{
	int N=9;
	for (row = 0; row < N; row++) 
		for (col = 0; col < N; col++) 
			if (grid[row][col] == UNASSIGNED) 
				return true; 
	return false; 
} 

bool UsedInRow(int grid[N][N], int row, int num) 
{ 
	for (int col = 0; col < N; col++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 

bool UsedInCol(int grid[N][N], int col, int num) 
{ 
	for (int row = 0; row < N; row++) 
		if (grid[row][col] == num) 
			return true; 
	return false; 
} 

bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num) 
{ 
	for (int row = 0; row < sq; row++) 
		for (int col = 0; col < sq; col++) 
			if (grid[row + boxStartRow] 
					[col + boxStartCol] == num) 
				return true; 
	return false; 
} 

bool isSafe(int grid[N][N], int row, int col, int num) 
{ 

	return !UsedInRow(grid, row, num) && 
		!UsedInCol(grid, col, num) && 
		!UsedInBox(grid, row - row %sq , col - col %sq, num) && 
                grid[row][col] == UNASSIGNED; 
} 
void printGrid(int grid[N][N]) 
{ 
	for (int row = 0; row < N; row++) 
	{ 
	for (int col = 0; col < N; col++) 
			cout << grid[row][col] << " "; 
		cout << endl; 
	} 
} 

int main() 
{ 


	int grid[10][10] ;
	int i,j;
	printf("Enter The size of N");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&grid[i][j]);
		}
	}
        sq=sqrt(N);
	if (SolveSudoku(grid) == true) 
		printGrid(grid); 
	else
		cout << "No solution exists"; 

	return 0; 
} 
