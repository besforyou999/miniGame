#include <iostream>
#include <string>
#include "word.h"
#include "user.h"


int main(){

	string s = "Hello world!";

	word w(3,3,s);

	std::cout << w.getName()  << std::endl;

	string s2 ="What up!";

	w.setName(s2);

	std::cout << w.getName()  << std::endl;

	return 0;
}
