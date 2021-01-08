#include "linux_kbhit.h"

int main(void)
{
	    int previous_keystroke = 0;
		printf("\n");
		printf("Type any key to see the return ASCII int of the key pressed.\n");
		printf("The program will start in 1sec. Press <Esc> to quit...\n\n");
		
		sleep(1);
						   
		while(1)
		{
		       int value = linux_kbhit();
										       
		       // key stroke detected
		       if (value != -1 && value != 27 )
		       {
		           // printing of key integer value
		           printf("%d\n", value);
		       }
			   else if (value == 27 )
				   break;
			 
			   printf(".");
	    }
							   
	    printf("\n");
	    printf("<Esc> key pressed. Bye bye\n\n");
									   
	    return 0;
}



