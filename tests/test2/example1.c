#include <stdio.h>
#include <time.h>
#include "CheckKey.h"

typedef struct tm tm;

int main() {
	
	time_t cur_time, prev_time;
	tm * p_cur_time;

	time(&prev_time);
	printf("Press any key to Exit Program!!\n");

	while(!CheckKey()) {
		
		time(&cur_time);
	
		if( prev_time != cur_time ) {
			prev_time = cur_time;
			p_cur_time = localtime(&cur_time);

		printf("%02d:%02d:%02d\r", p_cur_time->tm_hour, p_cur_time->tm_min, p_cur_time->tm_sec);
		
		
		
		
		fflush(stdout);
		}
	}

	return 0;

}

