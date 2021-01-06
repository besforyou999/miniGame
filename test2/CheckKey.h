#include <termios.h>
#include <unistd.h>

//if user press a key, return ASCII value
//if any key isn't pressed, return 0

char CheckKey() {

	struct termios org_term;

	tcgetattr(STDIN_FILENO, &org_term );

	struct termios new_term = org_term;

	new_term.c_lflag &= ~( ECHO | ICANON );

	new_term.c_cc[VMIN] = 0;
	new_term.c_cc[VTIME] = 0;

	tcsetattr( STDIN_FILENO, TCSANOW, &new_term );

	char input_key = 0;

	if(read(STDIN_FILENO, &input_key, 1) != 1 ) 
		input_key = 0;
	else {
		if(input_key == 27 ) {
			char dummy;

			while(read(STDIN_FILENO, &dummy, 1) == 1);
		}
	}

	// resetting terminal to original state
	tcsetattr( STDIN_FILENO, TCSANOW, &org_term );

	return input_key;

}

