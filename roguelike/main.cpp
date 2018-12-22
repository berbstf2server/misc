#include <iostream>
#include <string.h>
using namespace std;

char map[5][7] = {
	{'#', '#', '#', '#', '#', '#', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '#'},
	{'#', '#', '#', '#', '#', '#', '#'}
};


void printMap()
{
	//Row one
	cout << map[0][0];
	cout << map[0][1];
	cout << map[0][2];
	cout << map[0][3];
	cout << map[0][4];
	cout << map[0][5];
	cout << map[0][6] << endl;

	//Row two
	cout << map[1][0];
	cout << map[1][1];
	cout << map[1][2];
	cout << map[1][3];
	cout << map[1][4];
	cout << map[1][5];
	cout << map[1][6] << endl;

	//Row three
	cout << map[2][0];
	cout << map[2][1];
	cout << map[2][2];
	cout << map[2][3];
	cout << map[2][4];	
	cout << map[2][5];
	cout << map[2][6] << endl;

	//Row four
	cout << map[3][0];
	cout << map[3][1];
	cout << map[3][2];
	cout << map[3][3];
	cout << map[3][4];
	cout << map[3][5];
	cout << map[3][6] << endl;

	//Row five
	cout << map[4][0];
	cout << map[4][1];
	cout << map[4][2];
	cout << map[4][3];
	cout << map[4][4];
	cout << map[4][5];
	cout << map[4][6] << endl;
};

int main()
{
	int y = 2;
	int x = 3;
	
	map[y][x] = '@';

	printMap();
	
	positionInput:
	char movementDirection = '\0';
	map[y][x] = '.';
    cout << "Enter the direction you want to move (w,a,s,d): or 'q' to quit: ";
	cin >> movementDirection;

	//Forward
	if(movementDirection == 'w')
	{
		y = --y;
		if(map[y][x] == '#')
		{
			cout << "Thats a wall dummy!" << endl;
			y = ++y;
			goto positionInput;
		}
		else
		{
			map[y][x] = '@';	
			printMap();
			goto positionInput;
		}
	}	


	//Backward
	if(movementDirection == 's')
	{
		y = ++y;
		if(map[y][x] == '#')
		{
			cout << "Thats a wall dummy!" << endl;
			y = --y;
			goto positionInput;
		}
		else
		{
			map[y][x] = '@';	
			printMap();
			goto positionInput;
		}
	}	



	//Left
	if(movementDirection == 'a')
	{
		x = --x;
		if(map[y][x] == '#')
		{
			cout << "Thats a wall dummy!" << endl;
			x = ++x;
			goto positionInput;
		}
		else
		{
			map[y][x] = '@';	
			printMap();
			goto positionInput;
		}
	}	


	//Right
	if(movementDirection == 'd')
	{
		x = ++x;
		if(map[y][x] == '#')
		{
			cout << "Thats a wall dummy!" << endl;
			x = --x;
			goto positionInput;
		}
		else
		{
			map[y][x] = '@';	
			printMap();
			goto positionInput;
		}
	}	
	
	//Quit
	else if(movementDirection == 'q')
		return 0;
	else
	{
		cout << "Invalid input, try again" << endl;
		goto positionInput;
	}
}
