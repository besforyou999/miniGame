#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

#define COL_LIMIT 30
#define HOR_LIMIT 80
#define BALL_SPEED 3

void printPlayer(int y, int x);
void drawBox();
void drawBall(int y, int x);
void reverse_direction();

typedef struct Ball{
	int x;
	int y;
	int direction;
}BALL;

int control() {
	
	
	int row  = 3, col = COL_LIMIT / 2 - 2 ;
	int e_posx = HOR_LIMIT - 2, e_posy = COL_LIMIT / 2 - 2;

	BALL ball;	
	ball.x = HOR_LIMIT / 2 , ball.y = COL_LIMIT / 2;

	

	//init curses
	initscr();

	noecho();

	curs_set(FALSE);

	keypad(stdscr, TRUE);



	//init game
	drawBox();
	printPlayer(col, row);
	printPlayer(e_posy,e_posx);
	drawBall(ball_posy,ball_posx);

	mvprintw(COL_LIMIT / 2, HOR_LIMIT / 2 - 10 ,"Press any key to start");

	ball_direction = 0;
	
	while(1) {	
		
		int input = getch();

		clear();

		//player control
		switch(input) {

			case KEY_UP:
			--col;
			break;
			case KEY_DOWN:
			++col;
			break;
			case 'q':
			break;
			default:
			break;
		}

		if(input == 'q') break;
	
		if(col > COL_LIMIT - 5 ) col = COL_LIMIT - 5;
		if(col < 3 ) col = 3; 

		
		// ball movement
		if(ball_posx < 3 || ball_posx > 70) {		
			reverse_direction();
		}	 
	
	
		drawBox();
		printPlayer(col,row);
		printPlayer(e_posy, e_posx);
		drawBall(ball_posy,ball_posx);

	}

	endwin();

	return 1;
}

int main() {
	return control();
}


void printPlayer(int y, int x) {

	if( y < COL_LIMIT - 5) {

		move(y,x);
		printw("|");
		move(y+1,x);
		printw("|");
		move(y+2,x);
		printw("|");
		move(y+3,x);
		printw("|");
	} else {

		y=COL_LIMIT - 5;
		move(y,x);
		printw("|");
		move(y+1,x);
		printw("|");
		move(y+2,x);
		printw("|");
		move(y+3,x);
		printw("|");
	}

	return;
}


void drawBox() {

	for(int i=1; i <= HOR_LIMIT ; i++) {
		mvprintw(1,i,"-");
	}
	for(int i=1; i <= HOR_LIMIT ; i++) {
		mvprintw(COL_LIMIT , i, "-");
	}
	for(int i=2; i < COL_LIMIT ; i++) {
		mvprintw(i,1,"|");
	}
	for(int i=2; i < COL_LIMIT; i++) {
		mvprintw(i,HOR_LIMIT,"|");
	}

	return;
}


void drawBall(int y, int x) {

	mvprintw(y, x,"@");

	return;
}


void reverse_direction() {

		

}


