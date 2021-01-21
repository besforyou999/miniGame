#ifndef _WORD_H_
#define _WORD_H_

#include <string>

class word
{
	public:
		word(){
			this->s = nullptr;
			this->x = 0;
			this->y = 0;
		};
		word(int x, int y){
			this->s = nullptr;
			this->x = x;
			this->y = y;
		};
		
		std::string getString();
		void setString(std::string s);

		int getPosX();
		int getPosY();
		void setPosX(int x);
		void setPosY(int y);

	private:
		std::string s;
		int x;
		int y;
};

#endif
