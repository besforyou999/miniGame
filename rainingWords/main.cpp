#include <iostream>
#include "word.h"
#include "user.h"


int main(){

	user u;
	word s(3,10);
	

	int life = u.getLife();

	std::cout << "User's life : " << life << std::endl;


	int word_x = s.getPosX();
	int word_y = s.getPosY();

	std::cout << "Word x : " << word_x << std::endl;
	std::cout << "Word y : " << word_y << std::endl;


	return 0;
}
