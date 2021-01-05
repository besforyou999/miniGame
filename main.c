#include<stdio.h>
#include<ncurses.h>
#include<stdlib.h>
#include<unistd.h>

void printPlayer(int y, int x);
void printEnemy();

int timer(){
	
	int row = 6, col = 10;

	initscr();

	noecho();

	curs_set(FALSE);

	keypad(stdscr, TRUE);

	printPlayer(col, row);

	while(1)
	{
	
		int input = getch();

		clear();

		switch(input)
		{
			case KEY_UP:
			--col;
			break;
			case KEY_DOWN:
			++col;
			break;
			case 'q':
			break;
			default:
			continue;
		}

		if(input == 'q') break;
	
		if(col > 20 ) col = 20;
		if(col < 2 ) col = 2; 
	
		printPlayer(col,row);
	}

	endwin();

	return 1;
}

int main()
{
	return timer();
}


void printPlayer(int y, int x){


	if( y < 20){

	move(y,x);
	printw("|");
	move(y+1,x);
	printw("|");
	move(y+2,x);
	printw("|");
	move(y+3,x);
	printw("|");
	
	}
	else{
	y=20;
	move(y,x);
	printw("|");
	move(y+1,x);
	printw("|");
	move(y+2,x);
	printw("|");
	move(y+3,x);
	printw("|");
	}

}

/*
void printEnemy(){

	move(10,5);
	printw("------");

}

*/
