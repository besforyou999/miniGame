#include<stdio.h>
#include<stdlib.h>
#define gotoxy(x,y) printf("\033[%d;%dH",(y),(x))

void printPlayer();
void printEnemy();

int main(void){
	
	system("clear");			
	printPlayer();
	printEnemy();
	
	
	
return 1;
}


void printPlayer(){
	gotoxy(5,5);
	printf("######");

}

void printEnemy(){

	gotoxy(5,10);
	printf("------");

}
