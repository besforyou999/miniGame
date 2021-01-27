#include <iostream>
#include <string>
#include "word.h"
#include "user.h"
#include "word_data.h"


int main(){

	word_data d;
	
	string ans = d.getWordAtIndex(1);

	std::cout << ans << std::endl;

	d.setWordAtIndex(4,ans);

	ans = d.getWordAtIndex(4);

	std::cout << ans << std::endl;

	return 0;
}
