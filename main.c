#include<stdio.h>
#include<ncurses.h>
#include<stdlib.h>
#include<unistd.h>

void printPlayer(int y, int x);
void printEnemy();

int timer(){
	
	int row = 10, col = 10;

	initscr();

	noecho();

	curs_set(FALSE);

	keypad(stdscr, TRUE);

	while(1){
	
		int input = getch();

		clear();

		switch(input)
		{
			case KEY_UP:
			printPlayer(--row,col);
			continue;
			case KEY_DOWN:
			printPlayer(++row,col);
			continue;
			case 'q':
			break;
			default:
			printPlayer(row,col);
			continue;
		}

		if(input == 'q') break;
	
	}

	endwin();

	return 1;
}

int main(){
	return timer();
}


void printPlayer(int y, int x){

	move(y,x);
	printw("|");
	move(y+1,x);
	printw("|");
	move(y+2,x);
	printw("|");
	move(y+3,x);
	printw("|");	

}

/*
void printEnemy(){

	move(10,5);
	printw("------");

}

*/
