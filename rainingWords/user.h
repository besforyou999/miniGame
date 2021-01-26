#pragma once

class user
{
	public:
		user() : life(3)	{}

		void setLife(int life)
		{
			this->life = life;
		}

		void decreaseLife()
		{
			this->life -= 1;
		}

		int getLife();
		

	private:
		int life;
};


