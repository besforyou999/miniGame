#pragma once

class user
{
	public:
		user() : life(3)	{}

		void setLife(int life)
		{
			this->life = life;
		}		
		int getLife();

	private:
		int life;
};


