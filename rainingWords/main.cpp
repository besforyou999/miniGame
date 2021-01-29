#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "word.h"
#include "user.h"
#include "word_data.h"


int main(){

	word_data wd;
 	user user1;
	vector<word> v1;
	

	clock_t CurTime , PrevTime;

	srand((unsigned int)time(NULL));

	PrevTime = CurTime = clock();

	while(1) {

		 

		if( (CurTime - PrevTime)/CLOCKS_PER_SEC >= 1) {
			
			PrevTime = clock();
			std::cout << "It works" << std::endl;		

			/*
			int index = rand() % WORDS_SIZE;
	
			if(wd.getOccupationAtIndex(index)==0){
				string temp = wd.getWordAtIndex(index);
				wd.setOccupationAtIndex(index,1);

			}
			else if(wd.getOccupationAtIndex(index) == 1 ){
					
				std::cout << "Occupied!\n";
			
			}
			*/
			
		}

		CurTime = clock();		
	}


	return 0;
}
