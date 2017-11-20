// Minesweeper_FinalProject_Minesweeper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void minePlacement(int minefield[10][10]) {
	int minesLeft = 20;

	for (int i = 0; i < 10; i++) {
		for (int x = 0; x < 10; x++) {

			minefield[i][x] = rand() % 2;
		}
	}
}

int main()
{
	int minefield[10][10];

	srand(time(NULL));

	minePlacement(minefield);

	for (int i = 0; i < 10; i++) {
		for (int x = 0; x < 10; x++) {
			cout << minefield[i][x];
		}
		cout << endl;
	}


	system("pause");
    return 0;
}

