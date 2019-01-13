#include <iostream>
#include <ncurses.h>
#include <string.h>
using namespace std;

int main()
{
	const int ROWS = 7;
	const int COLUMNS = 7;

	char test[ROWS][COLUMNS] = {
	{'#', '#', '#', '#', '#', '#', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '@', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '#', '#', '#', '#', '#', '#'}
	};

	initscr();	
	curs_set(0);

	for (int row = 0; row < ROWS; ++row)
	{
		printw("\n");
		for (int column = 0; column < COLUMNS; ++column)
		{
			printw("%c", test[row][column]);	
		}
	}
	
	refresh();
	getch();

	endwin();
	return 0;
}
