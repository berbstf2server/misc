#include <iostream>
#include <ncurses.h>
#include <string.h>
using namespace std;


const int ROWS = 7;
const int COLUMNS = 7;

char test[ROWS][COLUMNS] = 
{
	{'#', '#', '#', '#', '#', '#', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '@', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '#', '#', '#', '#', '#', '#'}
};


void printMap()
{
	for (int row = 0; row < ROWS; ++row)
	{
		printw("\n");
		for (int column = 0; column < COLUMNS; ++column)
		{
			printw("%c", test[row][column]);	
		}
	}
};

int main()
{
	initscr();	
	curs_set(0);

	printMap();

	refresh();
	getch();

	endwin();
	return 0;
}
