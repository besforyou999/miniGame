#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

struct termios NonBlockingTerminalMode() {

	struct termios org_term;
	
	tcgetattr( STDIN_FILENO, &org_term ); //save original terminal settings

	struct termios new_term = org_term;

	new_term.c_lflag &= ~( ECHO | ICANON );

	new_term.c_cc[VMIN] = 0;
	new_term.c_cc[VTIME] = 0;

	tcsetattr( STDIN_FILENO, TCSANOW , &new_term ); //apply modified setting in terminal

	return org_term;
}

char GetNonBlockingInput() { 
	
	char input_key = 0;	//if user pressed a key, return 1. If not, return 0

	if(read(STDIN_FILENO, &input_key, 1) == 1 ) 
		return input_key;
	else
		return 0;
}

void ResetNonBlockingTerminalMode(struct termios a_org_term) {
	// apply original settings in terminal
	tcsetattr(STDIN_FILENO, TCSANOW, &a_org_term );

}

int main()
{
	struct termios org_term = NonBlockingTerminalMode();

	printf("Press any key\n");

	while(1) {
		
		char a;

		if( a =GetNonBlockingInput()){
			printf("%c",a);
		}

		fflush(stdout);
		
	}

	
	ResetNonBlockingTerminalMode(org_term);
	return 0;
}



















