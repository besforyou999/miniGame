#include<stdio.h>
#include<ncurses.h>
#include<stdlib.h>
#include<unistd.h>

void printPlayer();
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
			move(--row, col);
			printPlayer();
			continue;
			case KEY_DOWN:
			move(++row, col);
			printPlayer();
			continue;
			case KEY_LEFT:
			move(row, --col);
			printPlayer();
			continue;
			case KEY_RIGHT:
			move(row, ++col);
			printPlayer();
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


void printPlayer(){
	printw("######");

}

/*
void printEnemy(){

	move(10,5);
	printw("------");

}

*/
