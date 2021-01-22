#ifndef _WORD_H_
#define _WORD_H_

class word
{
	public:
		word(){
			this->x = 0;
			this->y = 0;
		};
		word(int x, int y){
			this->x = x;
			this->y = y;
		};
		

		int getPosX();
		int getPosY();
		void setPosX(int x);
		void setPosY(int y);

	private:
		int x;
		int y;
};

#endif
