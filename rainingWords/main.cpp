#include <iostream>
#include <string>
#include "word.h"
#include "user.h"

int main(){

	std::string s2;
	user u;
	word w(3,10);
	
	int life = u.getLife();

	std::cout << "User's life : " << life << std::endl;

	int word_x = w.getPosX();
	int word_y = w.getPosY();

	std::cout << "Word x : " << word_x << std::endl;
	std::cout << "Word y : " << word_y << std::endl;

	s2.push_back('a');


	std::cout << "Testing string : " << w << std::endl;

	return 0;
}
