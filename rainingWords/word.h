#ifndef _WORD_H_
#define _WORD_H_

#include <string>
using std::string;

class word
{
	public:
		word() {			
			this->x = 0;
			this->y = 0;
		};

		word(int x, int y) {			 
			this->x = x;
			this->y = y;
		};

		word(int x, int y, string name) {
			this->name = name;
			this->x = x;
			this->y = y;
		};
		
		int getPosX();
		int getPosY();
		string getName();

		void setPosX(int x);
		void setPosY(int y);
		void setName(string newName);

	private:
		string name;
		int x;
		int y;
};

#endif
