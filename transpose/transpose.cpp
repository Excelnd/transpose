// transpose.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int arr[3][5];
	int n, m, i, j;
	cin >> n >> m;

	for (i = 0; i <n; i++)
	{
		for (j = 0; j<m; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}

