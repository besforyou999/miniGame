#ifndef _WORDDATA_H_
#define _WORDDATA_H_

#define WORDS_SIZE 50

#include <vector>
#include <string>


using std::string;
using std::vector;

class word_data
{
	public:

		word_data() : occupation(WORDS_SIZE,0) , words(WORDS_SIZE) { 
			words[0] = "One";
			words[1] = "Two";
  			words[2] = "Three";
			words[3] = "Four";
			words[4] = "Five";
			words[5] = "Samsung";
			words[6] = "Apple";
			words[7] = "Microsoft";
			words[8] = "Google";
			words[9] = "vga";
			words[10] = "ten";
			words[11] = "eleven";
  			words[12] = "Twelve";
			words[13] = "Thirteen";
			words[14] = "Fourtenn";
			words[15] = "Fifteen";
			words[16] = "Sixteen";
			words[17] = "Seventeen";
			words[18] = "Eighteen";
			words[19] = "nineteen";
			words[20] = "Twenty";
			words[21] = "Twenty one";
  			words[22] = "Twenty two";
			words[23] = "Twenty three";
			words[24] = "Twenty four";
			words[25] = "Twenty five";
			words[26] = "Twenty six";
			words[27] = "Twenty seven";
			words[28] = "Twenty eight";
			words[29] = "Twenty nine";
			words[30] = "Thirty";
			words[31] = "Thirty one";
  			words[32] = "Thirty two";
			words[33] = "Thirty three";
			words[34] = "Thirty four";
			words[35] = "Thirty five";
			words[36] = "Thirty six";
			words[37] = "Thirty seven";
			words[38] = "Thirty eight";
			words[39] = "Thirty nine";
			words[40] = "Fourty";
			words[41] = "Fourty one";
  			words[42] = "Fourty two";
			words[43] = "Fourty three";
			words[44] = "Fourty four";
			words[45] = "Fourty five";
			words[46] = "Fourty six";
			words[47] = "Fourty seven";
			words[48] = "Fourty eight";
			words[49] = "Fourty nine";

		};


		string getWordAtIndex(int i);
		int getOccupationAtIndex(int i);	

		void setOccupationAtIndex(int index, int i);
		void setWordAtIndex(int i , string s);


	private:
		vector<int> occupation;
		vector<string> words;
};

#endif
