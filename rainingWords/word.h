#ifndef _WORD_H_
#define _WORD_H_

#include <string>


class word
{
	public:
		word(){
			this->s = NULL;
			this->x = 0;
			this->y = 0;
		};
		word(int x, int y){
			this->s = NULL;
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
		int x,y;
};


#endif
