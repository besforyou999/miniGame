#include "word_data.h"

string word_data::getWordAtIndex(int i) {

	return words[i];

}

void word_data::setWordAtIndex(int i, string s) {

    if(i > WORDS_SIZE - 1){
		return ;
	}

	words[i] = s;

	return ;
}
